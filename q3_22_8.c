//WAP to enter day of your choice
#include<stdio.h>
int main() {
    //Declare the variable and assign value to it
    int day;
    printf("Enter the day of your choice ");
    scanf("%d",&day);
    
    //Checking using switch
    switch(day)
    {
          case 1:
               printf("Monday \n");
               break;
          case 2:
               printf("Tuesday \n");
               break;
          case 3:
               printf("Wednesday \n");
               break;
          case 4:
               printf("Thursday \n");
               break;
          case 5:
               printf("Friday \n");
               break;
          case 6:
               printf("Saturday \n");
               break;
          case 7:
               printf("Sunday \n");
               break;
          default:
               printf("WRONG day press number between 1-7\n");
               }
      return 0;
      }
          
          
