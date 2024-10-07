// A program to display the cube of a number
#include <stdio.h>
int main(){
    int number, term, cube;
    
    printf("Enter the number to be cubed\n");
    scanf("%d", &number);
    
    printf("Enter the number of terms\n");
    scanf("%d", &term);
    
    int i=0;
    
   do {
       cube=number * number * number;
       printf("The number is %d and the cube is %d.\n",number,cube);
       number++;
       i++;
   }while (i<term);
   return 0;
   }