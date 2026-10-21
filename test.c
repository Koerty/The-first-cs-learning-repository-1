#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int n, o = 0;
//	scanf("%d", &n);
//	for (int i = 1;i <= n;i++)
//	{
//		int t = 0;
//		scanf("%d", &t);
//		for (int p = 2;p < t;p++)
//		{
//			if (t % p == 0)
//				o++;
//		}
//		if (o == 0 && t >= 2)
//			printf("yes\n");
//		else
//			printf("no\n");
//		o = 0;
//	}
//	return 0;
//}


//#include <stdio.h>
//int min(int c, int d)
//{
//	return c > d ? d : c;
//}
//int max(int c, int d)
//{
//	return c > d ? c : d;
//}
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	for (int i = 0;i < T;i++)
//	{
//		int n, t ,p= 0;
//		scanf("%d%d", &n, &t);
//		for (int s = 1;s <= min(n, t);s++)
//		{
//			if (n % s == 0 && t % s == 0)
//				p = s;
//		}
//		printf("%d\n", p);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int min(int c, int d)
//{
//	return c > d ? d : c;
//}
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	for (int i = 0;i < T;i++)
//	{
//		int n, t, p = 0;
//		scanf("%d%d", &n, &t);
//		for (int s = 1;s <= sqrt(min(n, t));s++)
//		{
//			if (n % s == 0 && t % s == 0)
//				p = s;
//		}
//		printf("%d\n", p);
//	}
//	return 0;
//}


//int gcd(int a, int b)
//{
//    while (b != 0)
//    {
//        int r = a % b;
//        a = b;
//        b = r;
//    }
//    return a;
//}
//int main()
//{
//    int T = 0;
//
//    if (scanf("%d", &T) != 1) return 0;
//
//    for (int i = 0; i < T; i++)
//    {
//        int n, t;
//        if (scanf("%d %d", &n, &t) != 2) return 0;
//
//        printf("%d\n", gcd(n, t));
//    }
//
//    return 0;
//}
//int main()
//{
//	for (int p = 1;p <= 9;p++)
//	{
//		for (int i = 1;i <= p;i++)
//		{
//			printf("%d*%d=%d ", p, i, p * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}





