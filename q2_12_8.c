//WAp to input time into seconds and convert it into hr,min,sec
#include <stdio.h>
int main() {
    int sec,hr,min,seconds;
    
    //Input seconds
    printf("Enter value of seconds you want to convert ");
    scanf("%d",&sec);
    
    //Converting seconds
    hr=sec/3600;
    min=(sec%3600)/60;
    seconds=sec%60;
    
    //Result
    printf("Your given second %d is %d hours %d minutes and %d seconds \n",sec,hr,min,seconds);
    
    return 0;
  }
