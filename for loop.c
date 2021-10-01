//WAP to the sum of the serise 
#include<stdio.h>
int main()
  
int oddsum(int n) ; 
{ 
    int sum = 0; 
    for (int i=0; i<= n; i++) 
    { 
    	sum += i * 2 + 1; 
    } 
    return sum; 
} 
 
// calculate for 111,  just pass 111/2  = 55 
//int result = oddsum(111 / 2); 
 
//  result == 3136 
