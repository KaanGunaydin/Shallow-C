#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>

int main(){
char input;
printf("Please enter a character:\n");
input = toupper(getchar());
switch (input)
{
case 'F':
printf("Fenerbahcee!");
    break;
case 'G':
printf("Galatasarayy!");
    break;
case 'T':
printf("Trabzonsporr");
    break;
case 'B':
printf("Besiktass!");
    break;

default:
printf("You don't support any teams or you have no skills in typing :(");
    break;
}
 return 0;
}