#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <time.h>

//int main()
//{
//	char arr1[] = "welcome to clanguage.";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = 0;
//	right = sizeof(arr1) / sizeof(arr1[0]);
//	right -= 2;
//	while (left<=right)
//	{
//		printf("%s\n", arr2);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,19,26,29,32,33,36,39 };
//	int i = sizeof(arr) / sizeof(arr[0]);
//	int r = 0;
//	int u = 0;
//	int p = 0;
//	int s = 0;
//	scanf("%d", &u);
//	for (r = 0;r<i&&arr[r] <= u;r++)
//	{
//		if (arr[r] == u)
//		{
//			printf("%d", r);
//			s = r;
//			p++;
//			break;
//		}
//	}
//	if (p == 0)
//		printf("Not found.");
//	return 0;
//}

//int main()
//{
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	int t = 0;
//	int flag = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,13,15,16,18,19,50,57,90,99,105 };
//	right = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &t);
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > t)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < t)
//		{
//			left = mid - 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			flag = 1;
//		}
//	}
//	if (flag != 1)
//		printf("Not dound.\n");
//	return 0;
//}

//int main()
//{
//	int n, j = 0;
//	scanf("%d", &n);
//	int arr[n];
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	while (j <= n)
//	{
//		for (int i = 0;i < j;i++)
//		{
//			if (arr[i] < arr[i + 1])
//				break;
//			else
//			{
//				int t = 0;
//				t = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = t;
//			}
//		}
//		for (int i = 0;i < j;i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//		j++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[][5] = { 0,2 };
//	printf("%d\n", arr[0][1]);
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 5;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 5;j++)
//		{
//			printf("%d ", &arr[i][j]);
//		}
//	}
//	printf("\n");
//	return 0;
//}



//int main()
//{
//	char name[3][10] =
//	{
//		"Korey",
//		"Eric",
//		"Frank"
//	};
//	int row1 = 0;
//	int row2 = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		row1 = rand() % 3;
//		row2 = rand() % 3;
//	} while (row1 == row2);
//	printf("%s ", name[row1]);
//	printf("%s", name[row2]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		arr[i] = i + 1;
//	}
//	
//	for (i = 0;i < n;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}



