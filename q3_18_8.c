//WAP to X^Y
#include<math.h>
#include<stdio.h>
int main() {
    //Declaring the variable and assinging value to it
    int x,y;
    double power=0;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    
    //Taking power using function of math library
    power=pow(x,y);
    
    printf("%d raise to the power of %d is = %lf \n",x,y,power);
    return 0;
    }
