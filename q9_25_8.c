//WAP to print fibonacci sequence upto nth term
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, c, i;
    printf("%d, %d\n", a, b);
    for (i = 2; i < n; i++) {
        c = a + b;
        printf("%d, %d\n", b, c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
