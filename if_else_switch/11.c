//Write a program that can test whether a number is Odd or Even.

#include <stdio.h>
#include <conio.h>

int main() {
        int a;

        printf("Enter a number: ");
        scanf("%d", &a);

        if (a % 2 == 0) {
            printf("%d is Even number.\n", a);
        } else {
            printf("%d is Odd number.\n", a);
        }

        return 0;
}