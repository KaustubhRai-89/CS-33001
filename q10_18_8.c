//WAP to check if the inputted number is positive , negative or zero
#include <stdio.h>

int main() {
    int number;

    // Taking input for the number
    printf("Enter a number: ");
    scanf("%d", &number);
      //Checking the number using if else
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } 
    else if (number < 0) {
        printf("%d is a negative number.\n", number);
    }
    else {
        printf("The number is zero.\n");
    }

    return 0;
}

