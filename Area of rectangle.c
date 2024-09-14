//A program to calculate the area of a rectangle
#include<stdio.h> //scanf printf
int main(){
    int length, width, Area;
    printf("Enter the length in centimetres\n");
    scanf("%d",&length);
     printf("Enter the width in centimetres\n");
    scanf("%d",&width);
    Area=length*width;
    printf("The Area of the rectangle in centimetre square is: \n%d",Area);
    return 0;
}