//WAP to swap the content of two variables using third variable.
#include <stdio.h>

int main() {
    int firstNumber, secondNumber, temp;

    // Input the numbers
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    // Swapping using a third variable
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    // Display the result
    printf("After swapping first number = %d and second number = %d \n", firstNumber, secondNumber);
    return 0;
}

