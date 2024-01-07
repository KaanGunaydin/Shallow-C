#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define SIZE 100

int main()
{
    char text[SIZE];
    gets(text);
    int i;
        for ( i = 0 ; i<SIZE ; i++)
        {
            if (text[i] == '\0')
            {
                break;
            }
            if ( isalpha(text[i])==1)
            {
                if (text[i]<=90)
                {
                    printf("%c",(text[i]+32));
                }
                else
                {
                    printf("%c",text[i]);
                }
            }
            else
            {
                printf("%c",text[i]); 
            }

        }
}