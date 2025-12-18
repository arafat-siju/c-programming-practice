// Find the all the prime numbers in number n Where n will be given through key board.

#include <stdio.h>
#include <conio.h>

int main(){
        int n, i, j, count;

        printf("Enter a number= ");
        scanf("%d", & n);

        printf("Prime numbers are= ", n);
        i=2;
        while(i <= n){
            count=0;
            j=1;
            while(j <= i){
                if(i % j == 0){
                    count++;
                }
                j++;
            }
            if(count == 2){
                printf("%d, ", i);
            }
            i++;
        }
        return 0;
}