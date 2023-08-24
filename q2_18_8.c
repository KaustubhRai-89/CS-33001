//WAP to give grade to the students 
#include<stdio.h>
int main() {
    // Declaring the variable and assinging it value
    int marks;
    printf("Enter the marks you want to assign the grade ");
    scanf("%d",&marks);
    
    //Applying if else condition to check the grade
    if ( marks>=90 && marks<=100) {
       printf("O grade \n ");
       }
    else if(marks>=80 && marks<=89) {
           printf("E grade \n");
       }
    else if(marks>=70 && marks<=79) {
           printf("A grade \n");
       }
    else if(marks>=60 && marks<=69) {
           printf("B grade \n");
       }
    else if(marks>=50 && marks<=59) {
           printf("C grade \n");
       }
    else if(marks>=0 && marks<=49) {
         printf("FAIL \n");
         }
    else{
        printf("Enter marks between 0-100 \n");
        }
        
    return 0 ;
    }
