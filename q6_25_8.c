//WAP to print table of number in the format 5 X 2 = 10
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}
