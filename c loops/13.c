/*After receiving the value of N the output will be as follows.
1. 1 = 1 
2. 1 + 2 = 3  
3. 1 + 2 + 3 = 6
4. 1 + 2 + 3 + 4 = 10
.
.
N. 1 +2 +3 +4 +5+....+ N = sum
*/

/*
#include <stdio.h>
#include <conio.h>

int main(){
    int N, i, j, sum;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++){
        sum = 0;
        for(j=1; j<=i; j++){
            printf("%d", j);
            sum = sum + j;
            if(j < i){
                printf(" + ");
            }
        }
        printf(" = %d\n", sum);
    }
    return 0;
}
*/  

#include <stdio.h>
#include <conio.h>

int main(){
        int N, i, j, sum;

        printf("Enter the value of N= ");
        scanf("%d", & N);

        i=1;
        while(i <= N){
            sum = 0;
            j = 1;
            while(j <= i){
                printf("%d", j);
                sum += j;
                if(j < i){
                    printf(" + ");
                }
                j++;
            }

            printf(" = %d\n", sum);
            i++;
        }

        return 0;
}