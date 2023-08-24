//WAP to test whether number is even or odd using switch
#include <stdio.h>
int main() {
    int number,num;

    // Taking input for the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is even or odd using a switch
    num=number%2;
    switch (num) {
        case 1:
            printf("%d is an odd number.\n",number);
            break;
        case 0:
            printf("%d is an even number.\n",number);
            break;
        default:
            printf("It is neither even nor odd\n"); }

    return 0;
}

