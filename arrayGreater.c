#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
int main()
{
int numbers[SIZE] = {25,22,17,19,47,3,98,5,124,10};
int i;
   for(i=0;i<SIZE;i++)
   {
    printf("%d\n",numbers[i]);
   }
   numbers[5]=6;
   printf("---------------------\n");
   printf("%d",numbers[5]);
return 0;
}