// Write a program that will obtain the length and width of a rectangle from the user and compute its area and perimeter.

#include <stdio.h>
#include <conio.h>

int main() {
        float length, width, area, perimeter;

        printf("Enter the length of the rectangle= ");
        scanf("%f", & length);

        printf("Enter the width of the rectangle= ");
        scanf("%f", & width);

        area = length * width;
        perimeter = 2 * (length + width);

        printf("Area of the rectangle = %.2f\n", area);
        printf("Perimeter of the rectangle = %.2f\n", perimeter);

        return 0;
}