//WAP to implement +,-,*,/ using switch
#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;

    // Taking input for operator and two numbers
    printf("Enter an operator (+, -, *, /, 'modulus'): ");
    scanf(" %c", &operator);

    printf("Enter first numbers: ");
    scanf("%lf", &num1);
    printf("Enter second numbers: ");
    scanf("%lf", &num2);
   // Performing arithmetic operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %lf\n", result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result: %lf\n", result);
            break;
        case '%':
            result = (int) num1 % (int) num2;
            printf("Result: %lf\n", result);
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}

