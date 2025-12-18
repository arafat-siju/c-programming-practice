//Write a program that can test a year whether it is leap year or not.

#include <stdio.h>
#include <conio.h>

int main() {
        int yr;

        printf("Enter a year: ");
        scanf("%d", & yr);

        if ((yr % 400 == 0) || ((yr % 4 == 0) && (yr % 100 != 0))) {
            printf("%d is a Leap year.\n", yr);
        }
        else {
            printf("%d is not a Leap year.\n", yr);
        }
        return 0;
}