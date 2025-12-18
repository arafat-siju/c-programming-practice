/*Convert a decimal numbers into binary number. 
input: 5, output: 101
input: 6, output: 110
input: 7, output: 111
*/

#include <stdio.h>
#include <conio.h>

int main(){
        int a, arr[50],i;

        printf("Enter a decimal number= ");
        scanf("%d", & a);
        
        i=0;
        while(a>0){
            arr[i] = a % 2;
            a = a/2;
            i++;
        }
        
        printf("binary form= ");
        
        while(i>0){
            i--;
            printf("%d",arr[i]);
        }
        return 0;
}