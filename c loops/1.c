// Print the series 1 2 3 4 5 . . . . . . n Where n will be given through keyboard.

#include <stdio.h>
#include <conio.h>

int main(){
        
        int i,n;
        printf("enter n= ");
        scanf("%d", & n);
        
        i=1;
        while(i<=n){
            printf("%4d",i);
            i++;
        }
        
        return 0;
}