// find out the factorial of a number N. where N will come from keyboard.

#include <stdio.h>
#include <conio.h>

int main(){
        int n, i, fact;

        printf("Enter a number= ");
        scanf("%d", &n);

        fact = 1;
        i=1;
        while(i <= n){
            fact = fact * i;
            i++;
        }

        printf("Factorial = %d", fact);

        return 0;
}