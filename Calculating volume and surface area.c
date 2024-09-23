//Calculating volume and surface area of a cylinder 
#include<stdio.h>//scanf printf
int main(){
    float pie=3.142;
    int radius, height, volume, surface_area;
    
    printf("Enter the radius:");
    scanf("%d",&radius);
    
    printf("Enter the height:");
    scanf("%d",&height);
    
    volume=pie*radius*radius*height;
    surface_area=(2*pie*radius*radius)+(2*pie*radius*height);
    
    printf("The volume of the cylinder is: %d\n",volume);
    printf("The surface area of the cylinder is: %d\n",surface_area);
    return 0;
}