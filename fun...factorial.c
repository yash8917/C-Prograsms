//WAP to factorial of a no. using user difine function..
#include<stdio.h>
int factorial(int a)
{
	int f=1;
	while(a>0)
	{
		f*=a;
		a--;
	}
	return f;
}
void main ()
{
	int a,f;
	printf("Enter the no. :\t");
	scanf("%d",&a);
	f=factorial(a);
	printf("%d",f);
}
