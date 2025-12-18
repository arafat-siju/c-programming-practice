/* Divide an integer number n into two parts n1 and n2 in such a way so that the n1 and n2 are
themeselves prime number and the sum of n1 and n2 is equal to n.  
Input:20, output:(1, 19), (3, 17), (7, 13)
Input:50, output:(3, 47), (7, 43), (13, 37), (19, 31)
Input:60, output:(1, 59), (7, 53), (13,47), (17, 43), (19, 41), (23, 37), (29, 31)
*/

#include <stdio.h>
#include <conio.h>

int main(){
        int n, n1, n2, count, counter, i, j;
        printf("Enter n= ");
        scanf("%d", & n);

        n1 = 1;
        while(n1 <= n/2){
            n2 = n - n1;
            
            i=1, count=0;
            while(i <= n1){
                if (n1 % i == 0){
                    count++;
                }
                i++;
            }
            
            j=1, counter=0;
            while(j <= n2){
                if(n2 % j == 0){
                    counter++;
                }
                j++;
            }

            if(((count == 2)||(n1 == 1)) && ((counter == 2)||(n2 == 1))){
                printf("(%d, %d), ", n1, n2);
            }
            n1 ++;
        }

        // here 1 is treated as prime..
        return 0;
}