#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main(void)
//{
//    int n;
//    scanf("%d", &n);
//    while (n--) {
//        int a, b, c, i;
//        scanf("%d%d%d", &a, &b, &c);
//
//        int q = a / b;
//        int rem = a % b;
//        int d[1005];
//
//        for (i = 0; i <= c; i++) {
//            rem *= 10;
//            d[i] = rem / b;
//            rem %= b;
//        }
//
//        if (d[c] >= 5) {
//            int k = c - 1;
//            while (k >= 0 && d[k] == 9) {
//                d[k] = 0;
//                k--;
//            }
//            if (k >= 0)
//                d[k]++;
//            else
//                q++;
//        }
//
//        printf("%d.", q);
//        for (i = 0; i < c; i++)
//            printf("%d", d[i]);
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	long long int t = 0;
//	long long int v = 0;
//	double p = 0;
//	int k = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%lld %d", &t, &p);
//		for (j = 0;t != 0;j++)
//		{
//			p = t % (int)pow(p, j);
//			if (p == 0)
//			{
//				v += (int)pow(p, j);
//				t -= (int)pow(p, j);
//			}
//		}
//		printf("%d", v);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    int n, a, b, i, k;
//    int d[40];
//
//    scanf("%d", &n);
//    while (n--) {
//        scanf("%d%d", &a, &b);
//
//        k = 0;
//        while (a > 0) {
//            d[k++] = a % b;
//            a /= b;
//        }
//
//        for (i = k - 1; i >= 0; i--)
//            printf("%d", d[i]);
//        printf("\n");
//    }
//    return 0;
//}

/*
 * 十进制整数 a 转成 b 进制输出（1 <= a <= 100000，2 <= b <= 10）
 *
 * 方法：不断除以 b，余数就是当前最低位的数字；先得到的余数是低位，
 *       所以要存进数组，最后倒着输出。
 *       例如 8 转 3 进制：8%3=2（个位）→ 8/3=2；2%3=2（高位）→ 2/3=0 结束
 *       余数依次是 2、2，倒过来输出就是 22。
 */
//
//int main()
//{
//	int n, a, b, p = 0;
//	int f[40] = { 0 };
//	scanf("%d", &n);
//	while (n--)
//	{
//		int t = 0;
//		scanf("%d %d", &a, &b);
//		while(a)
//		{
//			f[t++] = a % b;
//			a /= b;
//		}
//		for (int i = t - 1;i >= 0;i--)
//			printf("%d", f[i]);
//		printf("\n");
//	}
//	return 0;
//}

/*
 * 输入 a,b,c，输出 a/b 的小数形式，保留 c 位小数（最后一位四舍五入）。
 * 2 <= a,b <= 10^7，2 <= c <= 1000
 *
 * 思路：竖式除法（长除法）。
 *  1. 先算整数部分 q = a/b，余数 rem = a%b；
 *  2. 每一位小数：rem = rem*10，该位 = rem/b，再 rem %= b；
 *  3. 多算 1 位（第 c+1 位）用来判断是否需要进位；
 *  4. 若第 c+1 位 >= 5，从第 c 位往前加 1，注意连续的 9 会变 0 继续进位，
 *     若进位一直冲到最前面，则整数部分加 1。
 * 全程只用整数运算。c 最大 1000，double 存不下这么多位，只能用数组逐位存。
 */

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int a, b, c = 0;
//		scanf("%d %d %d", &a, &b, &c);
//		int q = a / b;
//		int rem = a % b;
//		int d[1005] = { 0 };
//		for(int i=0;i<=c;i++)
//		{
//		}
//	}
//
//
//	return 0;
//}

int main()
{




	return 0;
}

