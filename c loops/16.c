// Calculate the value of the series of e^x , e^-x , log(1+x) , log(1-x)

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int x;
    
    printf("Enter the value of x= ");
    scanf("%d", & x);
    
    printf("e^%d = %.4f\n", x, exp(x));
    printf("e^(-%d) = %.4f\n", x, exp(-x));
    
    if((1+x) > 0){
        printf("log(1 + %d) = %.4f\n", x, log(1 + x));
    }
    else if((1+x)==0){
        printf("Undefined\n");
    }
    else{
        printf("log(1 + %d) is undefined (cz negative)\n", x);
    }
    
    if((1-x)> 0){
        printf("log(1 - %d) = %.4f\n", x, log(1 - x));
    }
    else if((1+x)==0){
        printf("Undefined\n");
    }
    else{
        printf("log(1 - %d) is undefined (cz negative)\n", x);
    }
    
    return 0;
}