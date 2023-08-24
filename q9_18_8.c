//WAP to check if input number is even or odd
#include<stdio.h>
int main() {
    //Declaring variable and assigning value to it
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    //Checking the number using if else
    if (number == 0) {
        printf("The number is zero.\n");
    } 
    else if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } 
    else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}

