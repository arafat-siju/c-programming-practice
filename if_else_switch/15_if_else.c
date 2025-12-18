/*  Write a program that can say the name of weekdays by receiving 1 to 7.
    Using If-then-else statement
*/

#include <stdio.h>
#include <conio.h>

int main() {
        int a;

        printf("Enter a number (1-7)= ");
        scanf("%d", & a);

        if (a == 1) {
            printf("It is Sunday\n");
        }
        else if (a == 2) {
            printf("It is Monday\n");
        }
        else if (a == 3) {
            printf("It is Tuesday\n");
        }
        else if (a == 4) {
            printf("It is Wednesday\n");
        }
        else if (a == 5) {
            printf("It is Thursday\n");
        }
        else if (a == 6) {
            printf("It is Friday\n");
        }
        else if (a == 7) {
            printf("It is Saturday\n");
        }
        else {
            printf("Invalid input !! Please enter a number from 1 to 7.\n");
        }

        return 0;
}
