#include <stdio.h>
int main() {
float principal, rate, time, simpleInterest;
// Input principal, rate, and time
printf("Enter principal amount: ");
scanf("%f", &principal);
printf("Enter annual rate of interest (in percentage): ");
scanf("%f", &rate);
printf("Enter time period (in years): ");
scanf("%f", &time);
// Calculate simple interest
simpleInterest = (principal * rate * time) / 100;
printf("Simple Interest = %.2f\n", simpleInterest);
return 0;
}
