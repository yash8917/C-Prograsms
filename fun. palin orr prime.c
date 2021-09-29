#include<stdio.h>
int prime(int n)
{
	int i,c=0;
	for ( i=0;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	return 1;
	else 
		return 0;
}
int palin(int n)
{
	int s=0,d;
	int m=n;
	while(m>0)
	{
		 d=m%10;
		s=s*10+d;
		m=m/10;
	}
	if(s==n)
		return 1;
	else 
		return 0;
}
int main ()
{
	int n,f=0,a,b;
	scanf("%d",&n);
	while (f==1)
	{
		 a=prime(n);
		 b=palin(n);
	}
	if(a==1 && b==1)
	{
		f=1;
		break;
		n++;
	}
	printf("%d",n);
}
