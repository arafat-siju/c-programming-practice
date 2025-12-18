#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fb;
    char ch;
    int vowel = 0, va = 0,ve = 0,vi = 0,vo = 0,vu = 0;
    fb = fopen("world_war.txt", "r");

    while (!feof(fb)) {
        fscanf(fb, "%c", &ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel++;
        }
        if (ch == 'a' || ch == 'A'){
            va++;
        }
        if (ch == 'e' || ch == 'E'){
            ve++;
        }
        if (ch == 'i' || ch == 'I'){
            vi++;
        }
        if (ch == 'o' || ch == 'O'){
            vo++;
        }
        if (ch == 'u' || ch == 'U'){
            vu++;
        }
        
    }

    fclose(fb);
    printf("The total num of vowels = %d\n", vowel);
    printf("A = %d\n", va);
    printf("E = %d\n", ve);
    printf("I = %d\n", vi);
    printf("O = %d\n", vo);
    printf("U = %d\n", vu);
}