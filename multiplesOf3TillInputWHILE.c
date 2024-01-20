#include<stdlib.h>
#include<stdio.h>

int main(){
    int num,i=0;
printf("Pwease enter a numby :3\n");
if(scanf("%d",&num)!=1){
    printf("Pwease enter a valid numby >:(");
    return 1;
}
while (i+3<=num){
    i+=3;
    printf("%d uwu \n",i);
}
//IMGOINGINSANE :DDDDD
return 0;
}