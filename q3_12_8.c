//WAP which take character as input and convert it into its ASCII value
#include <stdio.h>

int main() {
    char character;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Convert the character to its ASCII value
    int asciiValue = (int)character;

    // Display the result
    printf("ASCII value of %c is %d\n", character, asciiValue);

    return 0;
}

