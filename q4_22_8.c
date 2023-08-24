//WAP to enter month of your choice
#include<stdio.h>
int main() {
    //Declare the variable and assign value to it
    int month;
    printf("Enter the month of your choice ");
    scanf("%d",&month);
    
    //Checking using switch
    switch(month)
    {
          case 1:
               printf("January \n");
               break;
          case 2:
               printf("February \n");
               break;
          case 3:
               printf("March \n");
               break;
          case 4:
               printf("April \n");
               break;
          case 5:
               printf("May \n");
               break;
          case 6:
               printf("June \n");
               break;
          case 7:
               printf("July \n");
               break;
          case 8:
               printf("August \n");
               break;
          case 9:
               printf("September \n");
               break;
          case 10:
               printf("October \n");
               break;
          case 11:
               printf("November \n");
               break;
          case 12:
               printf("December \n");
               break;
          default:
               printf("WRONG month press number between 1-7\n");
               }
      return 0;
      }
          
          
