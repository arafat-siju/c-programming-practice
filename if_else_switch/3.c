#include <stdio.h>
#include <conio.h>

int main() {
        float area, height, base;

        printf("Enter the area of the triangle= ");
        scanf("%f", & area);

        printf("Enter the height of the triangle= ");
        scanf("%f", & height);

        base = (2 * area) / height;

        printf("The base of the triangle is = %.2f\n", base);

        return 0;
}