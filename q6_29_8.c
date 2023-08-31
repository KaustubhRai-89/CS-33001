//WAP to sum of digits of numbers using while and do while loop
#include <stdio.h>
int main()
{
    int num,duplicate sum = 0;
    // Using while loop
    printf("Enter a number: ");
    scanf("%d", &num);
    duplicate=num;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("The sum of digits of the number using while loop is: %d\n", sum);
    // Using do while loop
    num = 0;
    sum = 0;
    do
    {
        sum += duplicate% 10;
        duplicate /= 10;
    } while (duplicate> 0);
    printf("The sum of digits of the number using do while loop is: %d\n", sum);
    return 0;
}
