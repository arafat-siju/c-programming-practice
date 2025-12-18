#include <stdio.h>
#include <conio.h>
#include<dos.h>

int main(){
    FILE *si;
    int count=0,word=0,line=0,sent=0;
    char ch;
    si= fopen("world_war.txt","r");
    while(!feof(si)){
        fscanf(si ,"%c", & ch);
        printf("%c",ch);
        if(!feof(si)){
            count++;
        }
        if(ch==' ')
            word++;
        if(ch=='\n')
            line++;
        if(ch == '.')
            sent++;

    }
    printf("\n\n\nlatter= %d,",count);
    printf("\nword=%d",word);
    printf("\n line=%d",line+1);
    printf("\nsentence=%d",sent);

    return 0;
}