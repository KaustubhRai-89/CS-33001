//WAP to implement +,-,*,/ using switch
#include <stdio.h>

int main() {
    int operator;
    double num1, num2, result;

    // Taking input for operator and two numbers
    printf("Enter an operator (+ is 1, - is 2, * is 3, / is 4): ");
    scanf(" %i", &operator);

    printf("Enter first numbers: ");
    scanf("%lf", &num1);
    printf("Enter second numbers: ");
    scanf("%lf", &num2);

    // Performing arithmetic operation based on the operator
    switch (operator) {
        case 1:
            result = num1 + num2;
            printf("Result: %lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %lf\n", result);
            break;
        case 4:
            result = num1 / num2;
            printf("Result: %lf\n", result);
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}

