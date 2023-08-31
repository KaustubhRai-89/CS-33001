//WAP 1^1 + 2^2 + 3^3 + 4^4 ... n ^n
#include <stdio.h>
int main() {
    int n;
    double sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        double power = 1;
        for (int j = 1; j <= i; j++) {
            power *= i;
        }
        sum += power;
        printf("%d^%d + ", i, i);
    }
    printf("= %f\n", sum);
    return 0;
}
