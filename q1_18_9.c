//WAP to check whether input year is leap year or not
#include<stdio.h>
int main() {
    //Declaring the variable and inputting the value
    int year;
    printf("Enter a value of year you want to check :");
    scanf("%d",&year);
    
    //Checking if the input is leap year or not
    if (year%4==0 && year%100 !=0 || year%400==0)  {
       printf(" %d is the leap year. \n",year);
       }
    else {
        printf(" %d is no the leap year. \n ", year);
        }
    return 0;
    }
    
    
