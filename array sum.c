#include<stdio.h>
int main()
{
	int i,sum=0,arr[5]={10,20,30,40,50};
	for(i=0;i<5;i++)
		{
			sum+=arr[i];
		}
	printf("%d\t",sum);
}
