#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    char calc;
 printf("Please enter your first number:");
 if (scanf("%d",&num1)!=1) {
     printf("Please a valid number!");
     return 1;
     
     }

 printf("Please enter your second number:");
 if (scanf("%d",&num2)!=1) { 
    printf("Please a valid number!");
    
    return 1;
    }

 printf("Please enter the calculation you want to do:");
 if (scanf(" %c",&calc)!=1) { 
    printf("Please a valid calculation!");
    
    return 1;
    }

 switch (calc)
 {
 case '*' :
 printf("%d * %d = %d",num1,num2,num1*num2);
    break;
    case '+' :
 printf("%d + %d = %d",num1,num2,num1+num2);
    break;
    case '-' :
 printf("%d - %d = %d",num1,num2,num1-num2);
    break;
    case '/' :
 printf("%d / %d = %.2f",num1,num2,num1/(float)num2);
    break;
 
 default:
  printf("Please a valid calculation!");
    break;
 
 }
 


    return 0;
}