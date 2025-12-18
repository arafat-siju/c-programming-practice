/* After receiving the value of N the output will be as follows.
1. 1 = 1 
2. 1 * 2 = 2 
3. 1 * 2 * 3 = 6 
4. 1 * 2 * 3 * 4 = 24 
.  
. 
N. 1 *2 *3 *4 *5*....* N = prod
*/

#include <stdio.h>
#include <conio.h>

int main(){
        int n, i, j;
        long prod = 1;

        printf("Enter value of N= ");
        scanf("%d", & n);
        
        i=1;
        while(i <= n){
            prod = prod * i;
            j = 1;
            while(j <= i){
                printf("%d", j);
                if(j < i){
                    printf(" * ");
                }
                j++;
            }
            printf(" = %ld\n", prod);

            i++;
        }
        return 0;
}