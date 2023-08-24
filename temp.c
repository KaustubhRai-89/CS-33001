#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    double p = 0;  // Change data type to double

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    p = pow(x, y);

    printf("%.0lf", p);  // Use "%.0lf" to print the double value as an integer
    return 0;
}
