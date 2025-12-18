#include <stdio.h>
#include <conio.h>
#define PI 3.1416   //this is symbolic constant for π

int main() {
        float r, area, circumference;

        printf("Enter the radius of the circle= ");
        scanf("%f", & r);

        area = PI * r * r;
        circumference = 2 * PI * r;
        printf("Area of the circle is = %.2f\n", area);
        printf("Circumference of the circle is = %.2f\n", circumference);

    return 0;
}