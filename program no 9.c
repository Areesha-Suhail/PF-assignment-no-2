
#include <stdio.h>

int main()
 {
   float principal, rate, time, simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);

    
    simpleInterest = (principal * rate * time) / 100;
    
    printf("Simple Interest: %f\n", simpleInterest);

    return 0;
    }