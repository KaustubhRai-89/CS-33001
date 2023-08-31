//WAP to find out the sum of 10 numbers divisble by 3 and 5 within 50 using while and do while loop
#include <stdio.h>
int main()
{
    int i = 1, sum = 0, count = 0;
    // Using while loop
    while (count < 10)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum += i;
            count++;
        }
        i++;
    }
    printf("The sum of 10 numbers divisible by 3 and 5 within 50 using while loop is: %d\n", sum);
    // Using do while loop
    i = 1;
    sum = 0;
    count = 0;
    do
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum += i;
            count++;
        }
        i++;
    } while (count < 10);
    printf("The sum of 10 numbers divisible by 3 and 5 within 50 using do while loop is: %d\n", sum);
    return 0;
}
