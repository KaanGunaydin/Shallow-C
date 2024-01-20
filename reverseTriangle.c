#include<stdlib.h>
#include<stdio.h>

int main()
{
   int a,b,i,j,num;
   printf("Please enter a number!\n");
   scanf(" %d",&num);
   // 0 1 1 2 2 3 3 4 4 5
   for(a=0;a<num;a++)
   {
    for(b=0;b<a;b++)
    {
    printf("*");
    }
    if(a!=num && a!= 0)
    {
        printf("\n");
    }
   }
   for(i=0;i<num;i++)
   {
    for(j=0;j<(num-i);j++)
    {
    printf("*");
    }
    if(i!=num)
    {
        printf("\n");
    }
   }
    return 0;
}