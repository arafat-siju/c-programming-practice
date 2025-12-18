//Write a program that can convert an upper case letter to lower case letter and vice versa.

#include <stdio.h>
#include <conio.h>
int main() {
        char ch;

        printf("Enter a letter= ");
        scanf(" %c", &ch);

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;   // uppercase to lowercase
        } 
        else if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;   // lowercase to uppercase
        }

        printf("Converted= %c\n", ch);
        return 0;
}

/*  অথবা

#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;

    printf("Enter a letter: ");
    scanf(" %c", &ch);

    if (isupper(ch)) {
        ch = tolower(ch);
    } 
    else if (islower(ch)) {
        ch = toupper(ch);
    }

    printf("Converted: %c\n", ch);

    return 0;
}

*/