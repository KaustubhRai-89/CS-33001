//WAP to check if the character is vowel or constonant
#include<stdio.h>
int main() {
    //Declaring and assiging value to the variable
    char ch;
    printf("Enter the variable you want to check ");
    scanf("%c",&ch);
    
    //Checking if the given character is vowel or constonant
    if ( ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u') {
        printf("%c is Vowel \n",ch);
        }
    else {
         printf("%c is constonant \n",ch);
         }
         
     return 0;
     }
