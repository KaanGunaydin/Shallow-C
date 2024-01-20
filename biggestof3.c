#include<stdlib.h>
#include<stdio.h>


int main(){
int  num1,num2,num3,temp;
printf("Please enter your first number!\n");
if(scanf("%d",&num1)!=1){ 
    printf("Please enter a valid number!");
    return 1;
    };
printf("Please enter your second number!\n");
if(scanf("%d",&num2)!=1){ 
    printf("Please enter a valid number!");
    return 1;
    };
printf("Please enter your third number!\n");
if(scanf("%d",&num3)!=1){ 
    printf("Please enter a valid number!");
    return 1;
    };
temp = num1 > num2 ? num1:num2;
temp = num3 > temp? num3:temp;

printf("Biggest number is: %d !",temp);


 return 0;
}