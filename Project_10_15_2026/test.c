#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>

//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i;i <= 10;i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i<=10) 
//	{
//		printf("%d ", i++);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(;;)
//	{
//		printf(" % d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (;i <= 10;i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = (b = 4, a = b + 4, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	double c = 0;
//	int b = 0;
//	int d = 1;
//	if (a = b + 1, c = a / 2, d > 0)
//		printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	for(int i=0;i<=100;i++)
//	{ 
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	for (int i = 0;i <= 100;i += 3)
//		sum += i;
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	double money = 10000;
//	int year = 0;
//	for (year = 1;year <= 5;year++)
//	{
//		money *= (1.03);
//	}
//	printf("%f\n", money);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int c = 0;
//	int w = 0;
//	scanf("%d", &c);
//	do
//	{
//		c /= 10;
//		w++;
//	} while (c != 0);
//	printf("%d\n", w);
//	return 0;
//}

//int main()
//{
//	int c = 0;
//	int w = 0;
//	start:
//	scanf("%d", &c);
//	if (c <= 0)
//	{
//		printf("Wrong,Please enter a positive integer.\n");
//		goto start;
//	}
//	do
//	{
//		w++;
//		c /= 10;
//	} while (c != 0);
//	printf("%d\n", w);
//	return 0;
//}

//int main()
//{
//	int c = 0;
//	int w = 0;
//	do 
//	{
//		scanf("%d", &c);
//		if (c <= 0)
//		{
//			printf("Wrong,Please enter a positive integer.\n");
//		}
//	} while (c <= 0);
//	do
//	{
//		w++;
//		c /= 10;
//	} while (c != 0);
//	printf("%d\n", w);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			i++;
//			continue;
//		}
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int l = 0;
	for (i = 100; i <= 200;i++)
	{
		int n = 0;
		for (int j = 2;j < i;j++)
		{
			if (i % j == 0)
				n++;
		}
		if (n == 0)
		printf("%d\n", i);
	}
	return 0;
}

