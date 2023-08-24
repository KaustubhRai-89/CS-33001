//WAP to check grade of student using switch 
#include <stdio.h>

int main() {
    int marks,temp;

    // Taking input for marks
    printf("Enter the marks: ");
    scanf("%d", &marks);

    // Checking the grade using a switch statement
    temp=marks/10;
    switch (temp) {
        case 10:
        case 9:
            printf("Grade: O\n");
            break;
        case 8:
            printf("Grade: E\n");
            break;
        case 7:
            printf("Grade: A\n");
            break;
        case 6:
            printf("Grade: B\n");
            break;
        case 5:
            printf("Grade: C\n");
        default:
            printf("FAIL\n");
            break;
    }

    return 0;
}

