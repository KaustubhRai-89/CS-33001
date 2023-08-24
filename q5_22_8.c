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
                
          case 2:
               printf("Tuesday \n");
                
          case 3:
               printf("Wednesday \n");
                
          case 4:
               printf("Thursday \n");
                
          case 5:
               printf("Friday \n");
                
          case 6:
               printf("Saturday \n");
                
          case 7:
               printf("Sunday \n");
                
          default:
               printf("WRONG day press number between 1-7\n");
               }
      return 0;
      }
          
          
