//WAP to compare three numbers
#include<stdio.h>
int main() {
    //Declare the variable and assign value to it
   int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Comparing the numbers using if else
    if (num1 > num2 && num1 > num3) {
        printf("%d is the largest number.\n", num1);
    } 
    else if (num2 > num1 && num2 > num3) {
        printf("%d is the largest number.\n", num2);
    } 
    else if (num3 > num1 && num3 > num2) {
        printf("%d is the largest number.\n", num3);
    } 
    else {
        printf("The numbers are not distinct.\n");
    }

    return 0;
}

