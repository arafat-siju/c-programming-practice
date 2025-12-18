#include <stdio.h>
#include <conio.h>

int main() {
    float a, b, c, sum, average;

    printf("Enter first number: ");
    scanf("%f", & a);

    printf("Enter second number: ");
    scanf("%f", & b);

    printf("Enter third number: ");
    scanf("%f", & c);

    sum = a + b + c;
    average = sum / 3;

    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}