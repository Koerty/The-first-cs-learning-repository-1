#include <stdio.h>
#include <stdint.h>

#if defined(_WIN32)
#include <windows.h>
#include <bcrypt.h>
#pragma comment(lib, "bcrypt.lib")

// 读取原始真随机字节
static int trng_raw(void* buf, size_t len)
{
    NTSTATUS st = BCryptGenRandom(NULL, (PUCHAR)buf, (ULONG)len, BCRYPT_USE_SYSTEM_PREFERRED_RNG);
    return NT_SUCCESS(st) ? 0 : -1;
}

#elif defined(__linux__) || defined(__APPLE__)
#include <sys/random.h>

static int trng_raw(void* buf, size_t len)
{
    // flag=0：等价于 /dev/urandom，非阻塞，绝大多数场景推荐
    ssize_t ret = getrandom(buf, len, 0);
    return (ret == (ssize_t)len) ? 0 : -1;
}

#else
#error "暂不支持该平台的真随机"
#endif

/**
 * @brief 生成【闭区间 [min, max]】的真随机无符号32位整数
 * @param min 范围下限（包含）
 * @param max 范围上限（包含）
 * @param out 输出结果
 * @return 0成功，-1失败
 * 范围： min ≤ *out ≤ max
 */
int trng_range_u32(uint32_t min, uint32_t max, uint32_t* out)
{
    if (out == NULL || min > max)
    {
        return -1;
    }
    const uint32_t range = max - min + 1;
    uint32_t raw;

    // 当range不是2的幂，循环采样消除取模偏置
    const uint32_t limit = UINT32_MAX - (UINT32_MAX % range);
    do
    {
        if (trng_raw(&raw, sizeof(raw)) != 0)
        {
            return -1;
        }
    } while (raw >= limit);

    *out = min + (raw % range);
    return 0;
}

/**
 * @brief 生成【闭区间 [min, max]】的真随机有符号32位整数
 * @param min 范围下限（包含）
 * @param max 范围上限（包含）
 * @param out 输出结果
 * @return 0成功，-1失败
 * 范围： min ≤ *out ≤ max
 */
int trng_range_i32(int32_t min, int32_t max, int32_t* out)
{
    if (out == NULL || min > max)
    {
        return -1;
    }
    uint32_t u_out;
    uint32_t u_min = (uint32_t)min;
    uint32_t u_max = (uint32_t)max;
    if (trng_range_u32(u_min, u_max, &u_out) != 0)
    {
        return -1;
    }
    *out = (int32_t)u_out;
    return 0;
}

// 测试示例
//int main(void)
//{
//    uint32_t ru;
//    int32_t  ri;
//
//    // ========== 示例1：无符号，范围 [1, 100] ==========
//    if (trng_range_u32(1, 100, &ru) == 0)
//    {
//        printf("真随机数 [1,100] = %u\n", ru);
//    }
//    else
//    {
//        printf("随机生成失败\n");
//    }
//
//    // ========== 示例2：有符号，范围 [-20, 20] ==========
//    if (trng_range_i32(-20, 20, &ri) == 0)
//    {
//        printf("真随机数 [-20,20] = %d\n", ri);
//    }
//    else
//    {
//        printf("随机生成失败\n");
//    }
//
//    return 0;
//}
