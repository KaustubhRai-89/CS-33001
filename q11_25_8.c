//WAP 1/1! + 2/2! + 3/3! + .. n/n! 
#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        double factorial = 1.0;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += (double)i / factorial;
        printf("%d/%d! + ", i, i);
    }
    printf("= %f\n", sum);
    return 0;
}
