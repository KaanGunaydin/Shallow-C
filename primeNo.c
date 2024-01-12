#include <stdio.h>
#include <stdlib.h>

int main ()
{
int num;
int i =2;
printf("Please enter your number:");
if (scanf("%d",&num)==1){
while (i<num)
{
if(num%i == 0)
{
   printf("Your number is not a prime!"); 
   return 0;
}
else{
    i++;
    printf("%d",i);
}
}
}
else { 
 printf("Please enter a valid number:"); 
 return 0;  
}
printf("Your number is a prime!");
    return 0;

}