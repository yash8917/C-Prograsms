#include<stdio.h>
int main()
{
	int a[100],j,n,i,pos,ele;
	printf("enter the array size: ");
	scanf("%d",&a[n]);
	printf("Enter the element's :");
	for(i=0; i<=n-1 ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position & element : ");
	scanf("%d%d",&pos,&ele);
	n+=1;
	for(i=n-1 ;i>pos-1 ;i--)
	{
		a[i+1]=a[i];
		a[pos-1]=ele;
	}
	printf("After insertion your array :\n");
	for (i=0 ;i<n ;i++)
		printf("%d",a[i]);
	printf("\n");
	
		
	
}
