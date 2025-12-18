// Print all odd numbers among 1 and n in ascending order.

#include <stdio.h>
#include <conio.h>

int main(){
        int n, i = 1;
        
        printf("Enter the value of n= ");
        scanf("%d", & n);
        
        printf("odd numbers from 1 to %d is= ", n);
        while(n >= i){
            if(i % 2 != 0){
                printf("%d", i);
            }
            else{
                printf(", ");
            }
            i++;
        }
        printf("\n");
        
        return 0;
}