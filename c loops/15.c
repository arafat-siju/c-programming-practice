//Find out the value of sinx, cosx, tanx, cots, secx, cosecx Where the value of x is in radian
// but you have to take the degree value from key board.


#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159265359

int main(){
        float degree, radian;
        
        printf("Enter angle in degree= ");
        scanf("%f", & degree);

        radian = degree * (PI / 180);
        
        if((int)degree % 180 == 0){
            printf("sin(%.3f rad) = %.2f\n", radian, sin(radian));
            printf("cos(%.3f rad) = %.2f\n", radian, cos(radian));
            printf("tan(%.3f rad) = %.2f\n", radian, tan(radian));
            printf("cot(%.3f rad) = Undefined\n", radian);
            printf("sec(%.3f rad) = %.2f\n", radian, 1/cos(radian));
            printf("cosec(%.3f rad) = Undefined\n",radian);
        }
        else if((int)degree % 90 == 0){
            printf("sin(%.3f rad) = %.2f\n", radian, sin(radian));
            printf("cos(%.3f rad) = %.2f\n", radian, cos(radian)); 
            printf("tan(%.3f rad) = Undefined\n", radian);
            printf("cot(%.3f rad) = %.2f\n", radian, 1/tan(radian));
            printf("sec(%.3f rad) = Undefined\n", radian);
            printf("cosec(%.3f rad) = %.2f\n",radian, 1/sin(radian));
        }
        else{
            printf("sin(%.3f rad) = %.2f\n", radian, sin(radian));
            printf("cos(%.3f rad) = %.2f\n", radian, cos(radian));
            printf("tan(%.3f rad) = %.2f\n", radian, tan(radian));
            printf("cot(%.3f rad) = %.2f\n", radian, 1/tan(radian));
            printf("sec(%.3f rad) = %.2f\n", radian, 1/cos(radian));
            printf("cosec(%.3f rad) = %.2f\n",radian, 1/sin(radian));
        }

        return 0;
        
}