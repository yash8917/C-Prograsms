//WAP to print binoial cofficient..
#include<stdio.h>
int factorial(int a)
{
	int f=1;
	while (a>0)
	{
		f*=a;
		a--;
	}
	return f;
}
int main()
{
	int n,r,F;
	printf("Enter the value of N,R :\t");
	scanf("%d%d",&n,&r);
	if (r>n)
	
		printf("Your cofficient are invalid.");
	else
		F=factorial(n)/(factorial(n-r)*factorial(r));
	printf("%d",F);
}
