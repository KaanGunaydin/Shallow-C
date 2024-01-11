#include <stdlib.h>
#include <stdio.h>

int main() {
printf("Please enter two numbers:\n");
int num1,num2;
// scanf function needs a pointer address to store value, thus using & before a variable is neccessary
scanf("%d %d",&num1,&num2);
printf("The first number is: %d\n",num1);
printf("The second number is: %d\n",num2);
printf("The remainder of your numbers is: %d\n",num1%num2);
 return 0;
}

