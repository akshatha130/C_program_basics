#include <stdio.h>
int main()
{
char fName[100];
int age;
printf("Enter your full name: ");
scanf("%s", &fName);
printf("Enter your age: ");
scanf("%d", &age);
// Display the information in a formatted manner
printf("\n--- User Details ---\n");
printf("Full Name: %s\n", fName);
printf("Age: %d\n", age);
return 0;
}
