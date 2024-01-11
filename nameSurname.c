#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
char name[30],sName[30];
int age,i;
printf("Please enter your name:\n");
if (scanf("%29s", name) != 1) {
        printf("Invalid input for name\n");
        return 1;
    }
printf("Please enter your surname:\n");    
if (scanf("%29s", sName) != 1) {
        printf("Invalid input for surname\n");
        return 1;
    }
printf("Please enter your age:\n");
if (scanf("%d",age) != 1) {
        printf("Invalid input for age\n");
        return 1;
    }
printf("-----------------\n");
printf("Your name is: %s\n",name);
printf("Your surname is: %s\n",sName);
printf("Your age is: %d\n",age);
printf("-----------------\n");
return 0;
}