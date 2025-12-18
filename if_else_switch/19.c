// Using the conditional operator find out the maximum of two numbers.

#include <stdio.h>
#include <conio.h>
int main() {
        int a, b, max;

        printf("Enter first number: ");
        scanf("%d", & a);

        printf("Enter second number: ");
        scanf("%d", & b);

        max = (a > b) ? a : b;

        printf("Maximum number is: %d\n", max);

        return 0;
}