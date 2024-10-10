//calculating simple Interest
#include<stdio.h> //scanf printf
int main(){
    int P, T, R,SimInt;
    
    printf("Enter the principal amount:");
    scanf("%d",&P);
    
    printf("Enter the time:");
    scanf("%d",&T);
    
    printf("Enter the rate:");
    scanf("%d",&R);
    
    SimInt=(P*T*R)/100;
    printf("The simple interest is: %d \n",SimInt);
    return 0;