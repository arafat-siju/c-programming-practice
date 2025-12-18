/*  Write a program that can say the name of Month by receiving 1 to 12.
    Using (i) If-then-else statement.
*/

#include <stdio.h>
#include <conio.h>
int main() {
        int a;

        printf("Enter month number (1-12): ");
        scanf("%d", &a);

        if (a == 1)
            printf("January\n");
        else if (a == 2)
            printf("It is February\n");
        else if (a == 3)
            printf("It is March\n");
        else if (a == 4)
            printf("It is April\n");
        else if (a == 5)
            printf("It is May\n");
        else if (a == 6)
            printf("It is June\n");
        else if (a == 7)
            printf("It is July\n");
        else if (a == 8)
            printf("It is August\n");
        else if (a == 9)
            printf("It is September\n");
        else if (a == 10)
            printf("It is October\n");
        else if (a == 11)
            printf("It is November\n");
        else if (a == 12)
            printf("December\n");
        else
            printf("Invalid number\n");

        return 0;
}