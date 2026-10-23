#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		int p = 0;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//				p++;
//		}
//		if (p == 0)
//			printf("%d ", i);
//		p = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		int p = 1;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				p = 0;
//				break;
//			}
//		}
//		if (p)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		int p = 1;
//		for (j = 2;j < sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				p = 0;
//				break;
//			}
//		}
//		if (p)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	printf("Hello,c.\n");
//	printf("Hello world.\n");
//	printf("Good luck!\n");
//	return 0;
//}
//int main()
//{
//	printf("Hello,c.\n");
//	goto next;
//	printf("Hello world.\n");
//	next:
//	printf("Good luck!\n");
//	return 0;
//}

//int main()
//{
//again:
//	printf("Hello world.\n");
//	goto again;
//	return 0;
//}

//int test()
//{
//	void* p1 = NULL, * p2 = NULL;
//	FILE* f = NULL;
//	f = fopen("file", "r");
//	if (!f)goto error;
//	p1 = malloc(100);
//	if (!p1)goto error;
//	p2 = malloc(200);
//	if (!p2)goto error;
//	free(p1);free(p2);fclose(f);
//	return 0;
//error:
//	if (p1)free(p1);
//	if (p2)free(p2);
//	if (f)fclose(f);
//	return -1;
//}

#include "randh.c"

int game(void)
{
	int r = 0;
	trng_range_u32(0, 100, &r);
	int i = 0;
	printf("Game begin.\n");
	printf("Please enter a number ranging 0 to 100.\n");
	scanf("%d", &i);
	if (i > r)
		printf("The number entered is too large.\n");
	else if (i < r)
		printf("The number entered is too small.\n");
	else
		printf("You are right.\n");
}
int main()
{
	int input = 0;
	do
	{
		printf("-------------------");
		printf("-------------------");
		printf("---   1:play    ---");
		printf("---   0:exit    ---");
		printf("-------------------");
		printf("-------------------");
		printf("-------------------");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			goto next;
		case 0:
			printf("Game over.\n");
			break;
		default:
			printf("Please enter 0 or 1.\n");
			break;
		}
		next:
		printf("Do you wanna try again?\n");
		scanf("%d", &input);
	} while (input);
	return 0;
}


