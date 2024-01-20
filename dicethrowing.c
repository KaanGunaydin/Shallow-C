#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
srand(time(NULL));
int dice1 = rand()%6 +1, dice2 =rand()%6 +1;

printf("First dice is:%d\n",dice1);
printf("Second dice is:%d\n",dice2);

if (dice1%2==0 && dice2%2==0){
printf("Congrats! Both of your dices are even!");    
}

 return 0;
}