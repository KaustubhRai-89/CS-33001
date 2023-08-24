//WAP to test if inputted char is vowel or constonant using switch
#include <stdio.h>

int main() {
    char ch;

    // Taking input for the character
    printf("Enter a character: ");
    scanf(" %c", &ch);

 
    // Checking if the character is a vowel or a consonant
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
            break;
    }

    return 0;
}

