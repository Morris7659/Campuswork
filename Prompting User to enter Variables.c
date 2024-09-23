//Prompting User to enter Variables
//C Variables and Data type
//Preprocessor directive
#include<stdio.h> //scanf printf
int main(){
    char a;//1 byte,%c
    char name[]={};
    int age;//0-9,%d;
    float area;//%f;
    double salary;//%lf;
    
    
    printf("Enter a character:");
    scanf("%c", &a);
    printf("The Character is %c \n",a);
    
    
    printf("Enter a name:");
    scanf("%s", &name);
    printf("The name is %s \n",name);
    
    
    printf("Enter the age:");
    scanf("%d", &age);
    printf("The age is %d \n",age);
    
    
    printf("Enter the area:");
    scanf("%f", &area);
    printf("The area is %2.5f \n",area);
    
    
    printf("Enter your salary:");
    scanf("%lf", &salary);
    printf("Your salary is %10.3lf \n",salary);
    return 0;
}