//Write a program that can say whether it is Character, digit or functional key.

#include <stdio.h>
#include <conio.h>

int main() {
        char ch;

        printf("Press a key= ");
        scanf(" %c", &ch);

        if (ch >= 'A' && ch <= 'Z') {
            printf("It is an Uppercase Character.\n");
        }
        else if (ch >= 'a' && ch <= 'z') {
            printf("It is a Lowercase Character.\n");
        }
        else if (ch >= '0' && ch <= '9') {
            printf("It is a Digit.\n");
        }
        else {
            printf("It is a Functional(Special) Key.\n");
        }
    return 0;
}