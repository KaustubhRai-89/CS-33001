//WAP to convert input variable from lowercase to uppercase and uppercase to lowercase
#include<stdio.h>
int main() {
    //Declaring the variable and assiging value to it
    char ch;
    printf("Enter the character you want to convert ");
    scanf("%c",&ch);
    
    //Converting it using if else statement
    if (ch >= 'a' && ch <= 'z') {
        char uppercase = ch - 32;
        printf("Uppercase: %c \n", uppercase);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        char lowercase = ch + 32;
        printf("Lowercase: %c\n", lowercase);
    }
     else {
        printf("Invalid input. Not a letter.\n");
    }

    return 0;
}

