#include <stdlib.h>
#include <stdio.h>



int main(){
const int lowersbt = 32;

char harf = 'a';

char harfup = harf - lowersbt ;
printf("harfin sayisal degeri: %d \n\n",harf); 
printf("harfin uppercase sayisal degeri: %d \n\n",harfup);
printf("harfin uppercase degeri: %c",harfup);
 return 0;

}