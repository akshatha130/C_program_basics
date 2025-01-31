#include <stdio.h>
int main()
{
int num1, num2, temp;
int a=5;
int b=10;
// Input two numbers
printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);
printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
// Swap the numbers using a third variable
temp = num1;
num1 = num2;
num2 = temp;

// Swap without third variable 
a = a +b;
b = a - b;
a = a - b;
printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
printf("Without Variable a = %d, b = %d\n", a,b);
return 0;
}
