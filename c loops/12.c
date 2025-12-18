/* Print the following full pyramid.  
          1  
         1 2  
        1 2 3  
       1 2 3 4  
      1 2 3 4 5  
       ……………………  
     ………….……………
    1 2 3 4 5 6 7……...n 
Where n will come from keyboard.
*/

#include <stdio.h>
#include <conio.h>

int main(){
        int n, i, j, k;
        
        printf("Enter the value of n= ");
        scanf("%d", & n);
        
        i=1;
        while(n >= i){
            
            j = 1;
            while(j <= (n-i)){
                printf(" ");
                j++;
            }
            
            k = 1;
            while(k <= i){
                printf("%d ", k);
                k++;
            }
            
            printf("\n");
            i++;
        }
        return 0;
}