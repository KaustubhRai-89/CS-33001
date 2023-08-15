//WAP to find out the sum of four digit numbers.
#include <stdio.h>
int main() {
    int number,temp1,temp2,temp3,temp4,duplicate,sum=0;
    //Input four digit number.
    printf("Enter the four digit number you want to add ");
    scanf("%d",&number);
    duplicate=number;
    //Calcultion of sum of 4 digits
    temp1=number%10;
    number=number/10;
    temp2=number%10;
    number=number/10;
    temp3=number%10;
    number=number/10;
    temp4=number%10;
    number=number/10;
    sum=temp1+temp2+temp3+temp4;
    //Result
    printf("Sum of the digits of %d is: %d\n", duplicate, sum);
    return 0;
  
  }
    
