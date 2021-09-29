#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the number :");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
//    printf("%d%d",a,b);
}
void swap(int *a,int *b)
{
    int t;
    t = *a;
    *a=*b;
    *b=t;
    printf("%d\t%d\n",*a,*b);
}
