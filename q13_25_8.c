//WAP to find LCM using GCD
#include <stdio.h>
int main() {
    int n, m, r;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);
    while (r != 0) {
        r = n % m;
        n = m;
        m = r;
    }
    printf("The GCD of %d and %d is %d\n", n, m, n);
    printf("The LCM of %d and %d is %d\n", n, m, (n * m) / n);
    return 0;
}
