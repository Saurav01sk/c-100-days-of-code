#include <stdio.h>
#include <math.h> 
int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (as a percentage, e.g., 5 for 5%%): ");
    scanf("%f", &rate);

    printf("Enter the time period in years: ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    compound_interest = principal * (pow((1 + rate / 100), time) - 1);

    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal: %.2f\n", principal);
    printf("Rate: %.2f%%\n", rate);
    printf("Time: %.2f years\n", time);
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}