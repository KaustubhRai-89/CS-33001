//WAP to find out sum and average of 10 numbers using while and do while loop seperately without using function and in c language
#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    float avg;
    // Using while loop
    i = 1;
    while (i <= 10)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
        i++;
    }
    avg = (float)sum / 10;
    printf("The sum of 10 numbers using while loop is: %d\n", sum);
    printf("The average of 10 numbers using while loop is: %.2f\n", avg);
    // Using do while loop
    i = 1;
    sum = 0;
    do
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
        i++;
    } while (i <= 10);
    avg = (float)sum / 10;
    printf("The sum of 10 numbers using do while loop is: %d\n", sum);
    printf("The average of 10 numbers using do while loop is: %.2f\n", avg);
    return 0;
}
