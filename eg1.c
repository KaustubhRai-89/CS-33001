//WAP to find average of three numbers taken as input from the user
#include<stdio.h>
int main() {
    int firstNumber,secondNumber,thirdNumber;
    
    //Input the value
    printf("Enter the value of first number you want to average ");
    scanf("%d",&firstNumber);
    
    printf("Enter the value of second number you want to average ");
    scanf("%d",&secondNumber);
    
    printf("Enter the value of third number you want to average ");
    scanf("%d",&thirdNumber);
    
    //Averaging 
    int avg=(firstNumber+secondNumber+thirdNumber)/3;
    
    //Result
    printf("The average of %d , %d and %d is = %d \n",firstNumber,secondNumber,thirdNumber,avg);
    
    return 0;
    
    }

