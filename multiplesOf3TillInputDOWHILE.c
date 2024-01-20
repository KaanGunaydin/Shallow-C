#include<stdlib.h>
#include<stdio.h>

int main(){
    int num,i=0;
printf("Pwease enter a numby :3\n");
if(scanf("%d",&num)!=1){
    printf("Pwease enter a valid numby >:(");
    return 1;
}
if (num >= 3) {
do
{
    printf("%d uwu\n",i);
    i+=3;
} while (i+3<=num);
}

//IMGOINGINSANE :DDDDD
return 0;

}