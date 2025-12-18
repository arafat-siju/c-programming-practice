/*Write a program that can reverse an integer number.
input: 26, output: 62
input: 856, output: 658
input: 14730, output: 03741
*/

#include <stdio.h>
#include <conio.h>

int main(){
        int n, reversed=0, remainder;

        printf("Enter an integer= ");
        scanf("%d", &n);

        while(n != 0){
            remainder = n % 10;
            reversed = (reversed*10) + remainder;
            n = n/10;
        }

        printf("Reversed number = %d\n", reversed);

        return 0;
}