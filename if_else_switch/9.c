// Write a program that can say the Askey(ASCII) value of a key of keyboard.

#include <stdio.h>
#include <conio.h>

int main() {
        char ch;

        printf("Enter a key= ");
        scanf("%c", &ch);

        printf("You pressed '%c' and its ASCII value is= %d\n", ch, ch);

        return 0;
}