//WAP to enter an alphabet and convert upper case to lower case
#include <stdio.h>

int main() {
    // Initialize variables
    char ch;

    // Input an alphabet
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    // Convert uppercase to lowercase using ASCII offset
    ch = ch + 32;

    // Print the result
    printf("Converted to lowercase: %c\n", ch);

    return 0;
}

