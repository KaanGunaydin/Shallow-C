#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
 int i,j,num;
 num = 7;
 printf("Please enter your number!\n");
 if(scanf("%d",&num)!=1)
 {
   printf("Please enter a valid number!\n"); 
   return 1;
 }
 if (num%2 ==0)
 //çift ise
 {
 for (i = (num-1);i>0;i -=2)
 {
    for(j=0;j<i;j++)
    {
    printf("*");
    }
    printf("\n");
 }
 }
 else
{
  for (i = num;i>0;i -=2)
 {
    for(j=0;j<i;j++)
    {
    printf("*");
    }
    printf("\n");
 }  
 }

    return 0;

}
