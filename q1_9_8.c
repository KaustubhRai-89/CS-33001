//WAP to subtract two float numbers

#include <stdio.h>

int main() {
    float firstNumber, secondNumber, answer;

    // Input the numbers
    printf("Enter the first number: ");
    scanf("%f", &firstNumber);

    printf("Enter the second number: ");
    scanf("%f", &secondNumber);

    // Subtract the numbers
    answer=firstNumber-secondNumber;

    // Display the result
    printf("The result of %f and %f is = %f \n",firstNumber,secondNumber,answer);
    return 0;
}


