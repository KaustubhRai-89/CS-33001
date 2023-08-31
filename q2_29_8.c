//WAP to print 10 to 1 using while and do while loop
#include <stdio.h>
int main()
{
    int i = 10;
    // Using while loop
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    // Using do while loop
    i = 10;
    printf(" \nNew loop starts here \n \n");
    do
    {
        printf("%d\n", i);
        i--;
    } while (i >= 1);
    return 0;
}
