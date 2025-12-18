// Print the series n, n-1, n-2,....,3, 2, 1 Where n will come through keyboard.

#include <stdio.h>
#include <conio.h>

int main(){
        int n, i;
        
        printf("Enter the value of n= ");
        scanf("%d", & n);
        
        i = n;
        printf("Series= ");
        while(i >= 1){
            printf("%d, ", i);
            i--;
        }
        printf("\n");
        
        return 0;
}