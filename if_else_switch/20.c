//Using the conditional operator find out the maximum of three numbers.

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

        max = (a > b) ? a : b;

        max = (max > c) ? max : c;

        printf("Maximum number is= %d\n", max);

        return 0;
}