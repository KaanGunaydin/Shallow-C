#include <stdio.h>
#include <stdlib.h>

int main() {
int num1,num2;
printf("Please enter your first number:");
if (scanf("%d",&num1)!=1){
    printf("Please enter a valid number");
}
printf("Please enter your second number:");
if (scanf("%d",&num2)!=1){
    printf("Please enter a valid number");
}
if(num1 != num2){
printf(num1 < num2 && num1 != num2 ? "Num2 is greater":"Num1 is greater");
}
else {printf("Numbers are equal");
}
    return 0;
}