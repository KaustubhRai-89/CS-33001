//WAP to test whether inputted number is palindrome or not
#include <stdio.h>
int main()
{
    int num, rev = 0, temp;
    // Using while loop
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == num)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    // Using do while loop
    num = 0;
    rev = 0;
    temp = 0;
    do
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    } while (temp > 0);
    if (rev == num)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}
