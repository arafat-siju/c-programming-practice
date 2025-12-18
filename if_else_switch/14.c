//Write a program that can test a numaber whether it is negative or positive.

#include <stdio.h>
#include <conio.h>

int main() {
        int a;

        printf("Enter a numaber: ");
        scanf("%d", &a);

        if (a > 0) {
            printf("%d is Positive.\n", a);
        }
        else if (a < 0) {
            printf("%d is Negative.\n", a);
        }
        else {
            printf("The numaber is Zero.\n");
        }

        return 0;
}