 #include <stdlib.h>
 #include <stdio.h>
 #include <ctype.h>
 #define SIZE 100


 int main()
 {
  char text[SIZE];
     gets(text);
     int i;
     int sum = 0;
         for ( i = 0 ; i<SIZE ; i++)
         {
            if (isdigit(text[i])==1)
            {
                 sum += (text[i] - '0');
            }

         }
     printf("Summary is: %d",sum);

 return 0;
 }
