#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10
int main()
{
srand(time(NULL));
float numbers[SIZE];
int i,sum=0;
    for (i=1;i<=SIZE;i++)
    {
        numbers[i-1]= ((float)(rand()%1000));
        //max random number is 1000
        printf("Number %2.d is :%.2f\n",i,numbers[i-1]);
    }
    for (i=1;i<=SIZE;i++)
    {
        sum += numbers[i-1];
    }
    printf("\nYour summary is:%d",sum);
 return 0;
}