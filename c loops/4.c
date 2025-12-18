// Print all even numbers among 1 and n in descending order.

#include <stdio.h>
#include <conio.h>

int main(){
        int n;
        printf("Enter a number= ");
        scanf("%d", & n);

        int i = n;
        printf("even numbers from %d to 1 is= ", n);
        while(i >= 1){
            if(i % 2 == 0){
                printf("%d", i);
            }
            else{
                printf(", ");
            }
            i--;
        }

        return 0;
}