#include<stdio.h> 
#include<conio.h> 
int main( ) 
{ 
int no, temp, rem, sum,count=0; 
//clrscr( ); 
printf("Armstrong numbers between 1 and 1000 are:\n"); 
for(no=1; no<=1000; no++) 
{ 
temp=no; 
sum=0; 
while(temp>0) 
{ 
rem=temp%10; 
sum=sum+(rem*rem*rem); 
temp=temp/10; 
} 
if(no==sum) 
{ 
printf("\n%d", no); 
count++; 
} 
} 
printf("%d",count); 
getch( ); 
return 0; 
} 
