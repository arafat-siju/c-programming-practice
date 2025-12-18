/*Find out the summation of the series ∑_1^n▒〖  x〗
 Where n will come from keyboard.
 */

#include <stdio.h>
#include <conio.h>

int main(){
        int n, i=1, sum=0;
        
        printf("Enter the value of n= ");
        scanf("%d", &n);

        printf("the series is= ");
        
        while(i <= n){
            printf("%d", i);
            sum += i;
            if(i < n){
                printf("+");
            }
            i++;
        }
        printf("\nsummation is= %d", sum);
        
        return 0;
}