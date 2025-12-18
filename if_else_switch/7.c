// Find out the maximum of three numbers using only if structure.

#include <stdio.h>
#include <conio.h>

int main() {
        int a, b, c, max;

        printf("Enter first number= ");
        scanf("%d", & a);
        printf("Enter second number= ");
        scanf("%d", & b);
        printf("Enter third number= ");
        scanf("%d", & c);

        max = a;          // assume first number is maximum

        if (b > max) {
            max = b;      // update if b is maximum
        }

        if (c > max) {
            max = c;      // update if c is maximum
        }

        printf("Maximum number is = %d\n", max);

        return 0;
}