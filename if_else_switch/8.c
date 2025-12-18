// Write a program that convert temperature to from Fahrenheit to Celsius and vice versa.

#include <stdio.h>
#include <conio.h>

int main() {
    float a, c, f, convert;

    printf("Choose conversion type:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2)= ");
    scanf("%f", & a);

    if (a == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", & c);
        f = ((c * 9)/5) + 32;
        printf("Temperature in Fahrenheit= %.2f\n", f);
    }

    if (a == 2) {
        printf("Enter temperature in Fahrenheit= ");
        scanf("%f", & f);
        c = ((f - 32)/9)* 5;
        
        printf("Temperature in Celsius: %.2f\n", c);
    }

    else {
        printf("Invalid choice !!\n");
    }
    return 0;
}