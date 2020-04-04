#define _CRT_SECURE_NO_WARNINGS
	 void Reverse(char* str)
 {
		 char* left = str;
		 char* right = str + strlen(str) - 1;
		 while (left < right)
		 {
			 char temp = *left;
			 *left = *right;
			 *right = temp;
			 ++left;
			 --right;
		 }
		 printf("%s\n", str);
	 }

 int main()
 {
	 char str[100] = { 0 };
	 gets (str);
		 Reverse(str);
	 return 0;
 }