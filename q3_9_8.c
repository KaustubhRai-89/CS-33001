//WAP to implement an arithemetic operation in a single program

#include <stdio.h>

int main() {
    float firstNumber, secondNumber;

    // Input the numbers
    printf("Enter the first number: ");
    scanf("%f", &firstNumber);

    printf("Enter the second number: ");
    scanf("%f", &secondNumber);

    // Subtract the numbers
    printf("The result of %f - %f is = %f \n", firstNumber, secondNumber,firstNumber-secondNumber);

    // Adding the numbers
    printf("The result of %f + %f is = %f \n", firstNumber, secondNumber,firstNumber+secondNumber);

    // Multiplying the numbers
    printf("The result of %f * %f is = %f \n",firstNumber, secondNumber,firstNumber*secondNumber);

    // Dividing the numbers
    printf("The result of %f / %f is = %f \n", firstNumber, secondNumber,firstNumber/secondNumber);
    return 0;
    }


