#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(){

    FILE *fff;
    char ch;
    fff = fopen("D:/File/world_war.txt" , "r");
    while( !feof(fff) ){
        fscanf(fff, "%c", & ch);
        printf("%c", ch);
        delay(40);
    }
    fclose(fff);

    return 0;
}