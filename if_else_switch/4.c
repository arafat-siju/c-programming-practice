#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
        float a, b, c, s, area;

        printf("Enter first side of the triangle= ");
        scanf("%f", & a);
        printf("Enter second side of the triangle= ");
        scanf("%f", & b);
        printf("Enter third side of the triangle= ");
        scanf("%f", & c);

        if((a + b > c) && (a + c > b) && (b + c > a))
        {
            s = (a + b + c) / 2;  //অর্ধ-পরিসীমা 
            area = sqrt(s * (s - a) * (s - b) * (s - c));

            printf("The area of the triangle = %.2f\n", area);
        }
        else {
            printf("the values will not form a triangle.\n");
        }

      return 0;
}