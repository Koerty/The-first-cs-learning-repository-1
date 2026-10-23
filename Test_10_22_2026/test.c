#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#include "truerand.h"
int game(void)
{
	long long r = 0;
	truerand_int(1, 100, &r);
	long long i = 0;
	printf("Game begin.\n");
	printf("Please enter a number ranging 0 to 100.\n");
	do
	{
		scanf("%d", &i);
		if (i > r)
			printf("The number entered is too large.\n");
		else if (i < r)
			printf("The number entered is too small.\n");
		else
			printf("You are right.\n");
	} while (i != r);
}
int main()
{
	int input = 0;
	do
	{
		printf("-------------------\n");
		printf("-------------------\n");
		printf("---   1:play    ---\n");
		printf("---   0:exit    ---\n");
		printf("-------------------\n");
		printf("-------------------\n");
		printf("-------------------\n");
		scanf("%d", &input);
		nextg:
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
			goto nextg;
	} while (input);
	return 0;
}
