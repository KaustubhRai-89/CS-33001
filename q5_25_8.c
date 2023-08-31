//WAP to find factorial of a number
#include <stdio.h>
int main() {
    int n, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("The factorial of %d is %d.\n", n, factorial);
    return 0;
}
