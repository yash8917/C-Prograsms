//WAP to add to no. by using pointer..
#include<stdio.h>

int main()
{
 	int a,b,*pa,*pb,c,*pc;
 	pa=&a;
 	pb=&b;
 	pc=&c;
 	printf("Enter the two no. :");
 	scanf("%d%d",pa,pb);
 	*pc= *pa + *pb;
 	printf("%d\n",*pc);
 	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,&a,b,&b,c,&c);
 	printf("%d\n%d\n%d\n%d\n%d\n%d",pa,pb,pc,&pa,&pb,&pc);
 	printf("\n%d\n%d\n",*pa,*pb);
}
