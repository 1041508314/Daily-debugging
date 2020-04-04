#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
void reverse(char *str)
{
	assert(str != NULL);
	int len = strlen(str);
	int tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str + 1) > 1)
		reverse(str + 1);
	*(str + len - 1) = tmp;
}
int main()
{
	char a[] = "abcdefg";
	reverse(a);
	printf("%s\n", a);
	system("pause");
	return 0;
}*/


//#include<stdio.h>
//int sum = 0;
//int DigitSum(int n)
//{
//	if (n>9)
//	{
//		DigitSum(n / 10);
//	}
//	sum += n % 10;
//	return sum;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//}

//#include<stdio.h>
//int my_math(int n, int k)
//{
//	if (k > 0)
//	{
//		return my_math(n, k - 1)*n;
//	}
//	return 1;
//}
//
//int main()
//{
//	int ret = my_math(4, 4);
//	printf("%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int Power(int n, int k)    
//{
//	if (k == 0){
//		return 1;
//	}
//	else if (k == 1) {
//		return n;
//	}
//	else{
//		return n*Power(n, k - 1);
//	}
//}
//int main(){
//	int n = 2, k = 2;
//	printf("请输入两个数字\n");
//	scanf("%d %d", &n, &k);
//	printf("%d的%d次方为%d", n, k, Power(n, k));
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//void reverse_print(const char *msg)
//{
//	if (*msg == '\0')
//	{
//		return;
//	}
//	reverse_print(msg + 1);
//	printf("%c", *msg);
//}
//int main()
//{
//	const char *str = "abcdef1234";
//	reverse_print(str);
//	printf("\n");
//	system("pause");
//	return 0;
//}

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	return 0;
}