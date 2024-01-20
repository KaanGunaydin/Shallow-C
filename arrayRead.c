#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 5
int main()
{
int numbers[SIZE];
int i;
    for (i=1;i<=SIZE;)
    {
        printf("Please enter your number %d:",i);
            if((scanf("%d",&numbers[i-1])!=1))
            {
                printf("You did not enter a valid value! Try again.\n");
                while (getchar() != '\n');
            }
            else
            {
                i++;
            }
    }
    printf("odd numbers:");
    for (i=1;i<=SIZE;i++)
    {
        if (numbers[i-1]%2!=0)
        {
            printf(" %d,",numbers[i-1]);
        }
    }
    printf("\neven numbers:");
     for (i=1;i<=SIZE;i++)
    {
        if (numbers[i-1]%2==0)
        {
            printf(" %d,",numbers[i-1]);
        }
    }

return 0;
}