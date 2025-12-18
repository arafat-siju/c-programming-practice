// Find out the maximum of two numbers using if structure.


#include <stdio.h>
#include <conio.h>

int main() 
{
        int a, b;

        printf("Enter first number: ");
        scanf("%d", & a);
        printf("Enter second number: ");
        scanf("%d", & b);

        if (a > b) {
            printf("Maximum = %d\n", a);
        }
        else {
            printf("Maximum = %d\n", b);
        }

        return 0;
}