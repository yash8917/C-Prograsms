#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter your name :");
	gets(str);
	int l= strlen(str);
	printf("Leanth = %d",l);
}
