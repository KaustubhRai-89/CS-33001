//WAP to print the reverse of the number using while and do while loop
#include <stdio.h>
int main()
{
    int num,duplicate, rev = 0;
    // Using while loop
    printf("Enter a number: ");
    scanf("%d", &num);
    duplicate=num;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("The reverse of the number is: %d\n", rev);
    // Using do while loop
    num = 0;
    rev = 0;
    do
    {
        rev = rev * 10 + duplicate % 10;
        duplicate /= 10;
    } while (duplicate > 0);
    printf("The reverse of the number is: %d\n", rev);
    return 0;
}
