//WAP to swap the content of two variables without using third variable.
#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    // Input the numbers
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    // Swapping without a third variable
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;

    // Display the result
    printf("After swapping first number = %d and second number = %d \n", firstNumber, secondNumber);
    return 0;
}
