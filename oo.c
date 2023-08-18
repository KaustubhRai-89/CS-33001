//WAP to converts a given temperature from Fahrenheit to Celsius.
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Display the converted temperature in Celsius
    printf("%f Fahrenheit is equal to %f Celsius \n", fahrenheit, celsius);

    return 0;
}

