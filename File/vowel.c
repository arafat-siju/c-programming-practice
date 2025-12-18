#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fb;
    char ch;
    int vowel = 0;
    fb = fopen("world_war.txt", "r");

    while (!feof(fb)) {
        fscanf(fb, "%c", &ch);
        printf("%c",ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel++;
        }
    }

    fclose(fb);
    printf("The total num of vowels = %d", vowel);
}