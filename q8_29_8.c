//WAP to find out if the given number is prime or not
#include <stdio.h>
int main()
{
    int num, i;
    // Using while loop
    printf("Enter a number: ");
    scanf("%d", &num);
    i = 2;
    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number.\n", num);
            break;
        }
        i++;
    }
    if (i > num / 2)
        printf("%d is a prime number.\n", num);
    return 0;
}
