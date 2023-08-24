#include<stdio.h>

int main() {
    // Declare variables
    int number, firstDigit, fourthDigit, sum;

    // Get the four-digit number from the user
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    
    fourthDigit = number % 10;
    number = number / 10; 
    firstDigit = number / 100;

    // Calculate the sum
    sum = firstDigit + fourthDigit;

    // Print the sum
    printf("Sum of the first and fourth digits: %d\n", sum);

    return 0;
}

