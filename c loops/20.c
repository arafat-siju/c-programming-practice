/* Find the factors of an integer number.
input: 20, output: 1,2,4,5,10,20
input: 25,  output: 1,5,25
input: 30, output: 1,2,3,5,6,10,15,30
*/

#include <stdio.h>
#include <conio.h>

int main(){
        int a, i=1;

        printf("Enter an integer= ");
        scanf("%d", & a);

        printf("Factors of %d are= ", a);
        while (a >= i) {
            if (a % i == 0) {
                printf("%d, ", i);
            }
            i++;
        }
        return 0;
}