//WAP to print all the even numbers within 50 using while loop and do while loop
#include <stdio.h>
int main()
{
    int i = 2;
    // Using while loop
    while (i <= 50)
    {
        printf("%d\n", i);
        i += 2;
    }
    // Using do while loop
    i = 2;
    do
    {
        printf("%d\n", i);
        i += 2;
    } while (i <= 50);
    return 0;
}
