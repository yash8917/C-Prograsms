#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	printf("Entr the string");
	gets(str1);
	strcpy(str2,str1);
	puts(str2);
}
