#define _CRT_SECURE_NO_WARNINGS




//int main()
//{
//	int num = 9;
//	int i;
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int data = 0;
//	printf("请输入数字：");
//	scanf("%d ", &data);
//	int a[32];
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		a[i] = data % 2;
//		data /= 2;
//	}
//	printf("奇数位");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	printf("偶数位");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int num = 0;
//	printf("请输入数字：");
//	scanf("%d ", &num);
//	printf("奇数位");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	printf("偶数位");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", ((num >> i) & 1));
//	}
//	return 0;
//}


int main()
{
	int i, j, num;
	char arr1[16];
	char arr2[16];
	printf("输入一个整数：");
	scanf("%d", &num);
	for (i = 0, j = 0; i < 32; i += 2, j++)
	{
		arr1[15 - j] = (num >> i) & 1;
	}
	printf("奇数位\n");
	for (j = 0; j < 16; j++)
	{
		printf("%d ", arr1[j]);
	}
	printf("\n");

	for (i = 1, j = 0; i < 32; i += 2, j++)
	{
		arr2[15 - j] = (num >> i) & 1;
	}
	printf("偶数位\n");
	for (j = 0; j < 16; j++)
	{
		printf("%d ", arr2[j]);
	}
	printf("\n");
	return 0;
}

