// Test a number whether it is prime number or non prime number.

#include <stdio.h>
#include <conio.h>

int main(){
        int n, i=1, count =0;

        printf("Enter a number= ");
        scanf("%d", & n);

        while(i <= n){
            if(n % i == 0){
                count++;
            }
            i++;
        }

        if(count == 2){
            printf("%d is a Prime number\n", n);
        }
        else{
            printf("%d is a Non-Prime number\n", n);
        }

        return 0;
}