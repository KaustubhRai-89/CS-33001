//WAP to test if the number is strong number or not
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    for (; temp > 0; temp /= 10) {
        int digit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial = factorial*i;
        }
        sum += factorial;
    }
    if (sum == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }
    return 0;
}
