//WAP to find the roots of the quadratic equations
#include<stdio.h>
#include<math.h>
int main() {
    //Declaring and assiging value to the variable
    int a,b,c,discriminant;
    printf("Enter value of the x^2 variable \n");
    scanf("%d",&a);
    printf("Enter value of the coefficient of x: ");
    scanf("%d", &b);

    printf("Enter constant term: ");
    scanf("%d", &c);

    // Calculating the discriminant
   discriminant = b * b - 4 * a * c;

    // Checking the value of the discriminant to determine the nature of roots
    if (discriminant > 0) {
        float r1 = (-b + sqrt(discriminant)) / (2 * a);
        float r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %f\n", r1);
        printf("Root 2 = %f\n", r2);
    } else if (discriminant == 0) {
        float r1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %f\n", r1);
    } else {
        float r1 = -b / (2 * a);
        float r2 = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex:\n");
        printf("Root 1 = %f + %fi\n", r1, r2);
        printf("Root 2 = %f - %fi\n", r1,r2);
    }

    return 0;
}

