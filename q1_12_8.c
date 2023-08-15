//WAP to convert paisa into rupees
#include <stdio.h>

int main() {
    int paisa;
    int inr, tempPaisa;

    // Input paisa
    printf("Enter paisa: ");
    scanf("%d", &paisa);

    // Calculate rupees and paise
    inr = paisa / 100;
    tempPaisa = paisa % 100;

    // Display the result
    printf("Equivalent: %d rupees and %d paise\n", inr,tempPaisa);
    return 0;
}

