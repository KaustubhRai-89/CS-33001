//WAP to find if the inputted number is armstrong or not
#include <stdio.h>
#include <math.h>
int main()
{
    int num, originalNum, remainder, result = 0;
    int digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    // Find the number of digits in the number
    while (originalNum != 0)
    {
        digits++;
        originalNum /= 10;
    }
    // Find the sum of the digits raised to the power of the number of digits
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }
    // Check if the number is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
