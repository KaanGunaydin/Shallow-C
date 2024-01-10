#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2, rem;
    float div;

  printf("Please enter your first number: ");
    if (scanf("%d", &num1) != 1) {
        printf("Error: Invalid input for the first number.\n");
        return 1;
    }

    printf("Please enter your second number: ");
    if (scanf("%d", &num2) != 1) {
        printf("Error: Invalid input for the second number.\n");
        return 1;
    }
 
    if (num2 != 0) {
        div = (float)num1 / num2;
        rem = num1 % num2;
        printf("Your division result is %.0f and your remainder is %d\n", div, rem);
    } else {
        printf("Error: Division by zero is undefined.\n");
    }

    return 0;
}
