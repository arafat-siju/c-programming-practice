// Print the series 1 2 3 4 5 . . . . . . n Where n will be given through keyboard.

#include <stdio.h>

int main(){
        
    int i,n;
    printf("enter n= ");
    scanf("%d", & n);
  
    for(i = 1; i <= n; i++){
        printf("%4d", i);
    }

    /*
    i=1;
    while(i<=n){
        printf("%4d",i);
        i++;
    }
    */
        
    return 0;
}