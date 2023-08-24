//WAP to check if the user is above 18 or not
#include<stdio.h>
int main() {
    // Taking input for the user's age
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // Checking if the age is above 18
    if (age >= 18) {
        printf("You are above 18 years old.\n");
    } 
     else {
        printf("You are below 18 years old.\n");
    }

    return 0;
}
 
