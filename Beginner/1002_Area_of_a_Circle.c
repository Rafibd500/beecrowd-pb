#include<stdio.h>
#include<math.h>
int main(){
    double A, R, n = 3.14159;
    
    scanf("%lf", &R);
    A = n*pow(R,2);
    printf("A=%.4lf\n", A);
    return 0;
}