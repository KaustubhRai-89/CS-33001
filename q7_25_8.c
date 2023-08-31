//WAP to printf x ^ y using for loop 
#include <stdio.h>
int main() {
    int x, y, power = 1;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a power: ");
    scanf("%d", &y);
    for (int i = 1; i <= y; i++) {
        power = power*x;
    }
    printf("%d^%d = %d\n", x, y, power);
    return 0;
}
