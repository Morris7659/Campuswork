//Calculating compound interest
#include<stdio.h>//scanf printf
#include <math.h>
int main(){
    double final_amount, principal_amount, rate, compound_interest;
    int time_taken, number_of_compounding_per_year;
    
    printf("Enter the principal amount:");
    scanf("%lf",&principal_amount);
    
    printf("Enter the numper of compounding per year:");
    scanf("%d",&number_of_compounding_per_year);
    
    printf("Enter the time taken in years:");
    scanf("%d",&time_taken);
    
    printf("Enter the interest rate:");
    scanf("%lf",&rate);
    
    rate=rate/100;
    final_amount=principal_amount*pow((1+rate/number_of_compounding_per_year),number_of_compounding_per_year*time_taken);
    compound_interest=final_amount-principal_amount;
    
    printf("The final amount is: %.2f \n",final_amount);
    printf("The compound interest is: %.2f \n",compound_interest);
    return 0;
}    