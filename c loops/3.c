// Print all odd numbers among 1 and n in ascending order.

#include <stdio.h>

int main(){
        int n, i = 1;
        
        printf("Enter the value of n= ");
        scanf("%d", & n);
        
        printf("odd numbers from 1 to %d is = ", n);

        for(i = 1; i <= n; i++){
            if(i % 2 != 0){
                printf("%d", i);
            }
            else{
                printf(", ");
            }
        }
        
        /*
        while(i <= n){
            if(i % 2 != 0){
                printf("%d", i);
            }
            else{
                printf(", ");
            }
            i++;
        }
        */
        
        return 0;
}