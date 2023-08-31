//WAP to find the sum of the digit of the number using for loop
#include<stdio.h>
int main() {
    int number,sum;
    int temp =0;
    printf("Enter the number whose sum you want to find ");
    scanf("%d",&number);
    for(number;number>=0;number=number/10) {
       temp=number%10;
       sum=sum+temp;
      }
    printf("Sum of %d is %d \n",number,sum);
    return 0;
    }
