#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main()
{

int num,rem,i;
printf("Please enter your number:");
    if (scanf("%d", &num) == 1){

rem = num % 2 ;
printf("%i",rem);

if (rem == 1){
printf("The number you entered is odd!");
}
else if (rem == 0){
    printf("The number you entered is even!");
}
}
else {printf("Please enter a valid number");}
return 0;
}