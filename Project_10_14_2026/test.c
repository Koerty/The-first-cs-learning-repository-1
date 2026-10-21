#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("Monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	}
//
//
//
//
//
//
//	
//	return 0;
//}




//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("Morning lecture warriors.\n");
//		break;
//	case 2:
//		printf("Midday lecture warriors.\n");
//		break;
//	case 3:
//		printf("Busy lecture warriors.\n");
//		break;
//	case 4:
//		printf("Afternoon lecture warriors.\n");
//		break;
//	case 5:
//		printf("Evening lecture warriors.\n");
//		break;
//	case 6:
//		printf("Break time.\n");
//		break;
//	case 7:
//		printf("Weekend warriors.\n");
//		break;
//	}
//	
//	return 0;
//}
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("Morning lecture warriors.\n");
//		break;
//	case 6:
//	case 7:
//		printf("Weekend warriors and break time.\n");
//		break;
//
//	}
//	return 0;
//}

//int main()
//{
//	while (1)
//		printf("Hello World\n");
//
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
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
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d\n", n % 10);
//		n /= 10;
//
//	}
//
//
//
//		return 0;
//}


//int main()
//{
//	int n = 0;
//	int l = 0;
//	scanf("%d", &n);
//	while (l <= n)
//	{
//		printf("%d\n", l);
//		l += 2;
//	}
//	printf("\n");
//	return 0;
//}
int main()
{
	int boss_hp = 100;
	int attack = 15;
	while (boss_hp > 0)
	{
		
		int real_attack = boss_hp > attack ? attack : boss_hp;
		boss_hp -= real_attack;
		printf("Boss is attacked, lost %d HP, remaining HP: %d\n", real_attack, boss_hp);


	}


	
	return 0;
}




