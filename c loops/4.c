// Print all even numbers among 1 and n in descending order.

#include <stdio.h>

int main(){
        int n;
        printf("Enter a number= ");
        scanf("%d", & n);

        int i = n;
        printf("even numbers from %d to 1 is= ", n);

        for(i = n; i >= 1; i--){
            if(i % 2 == 0){
                printf("%d", i);
            }
            else{
                printf(", ");
            }
        }

        /*
        while(i >= 1){
            if(i % 2 == 0){
                printf("%d", i);
            }
            else{
                printf(", ");
            }
            i--;
        }
        */

        return 0;
}