/* Write a program to compute the roots of a quadratic equation ax^2+bx+c=0
use following conditions:
    (i) There is only one root, if a =0 (x = -c/b).
    (ii) There are no real roots, if b2-4ac is negative.
Otherwise, there are no real roots.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
        float a,b,c,d, x1, x2; // d = discriminant

        printf("Enter coefficient of x^2 (a)= ");
        scanf("%f", & a);
        printf("Enter coefficient of x (b)= ");
        scanf("%f", & b);
        printf("Enter constant (c)= ");
        scanf("%f", & c);

        if (a == 0) {
            if (b == 0) {
                printf("No solution.\n");
            }
            else {
                x1 = -c / b;
                printf("Only one Root: x = %.2f\n", x1);
            }
        }
        else {
            d = b*b - 4*a*c;

            if (d < 0){
                printf("No real roots. imaginary number.\n");
            }
            else {
                x1 = (-b + sqrt(d)) / (2*a);
                x2 = (-b - sqrt(d)) / (2*a);
                printf("Two real roots:\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
            }
        }
        return 0;
}