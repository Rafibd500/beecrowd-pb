#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c, area1, area2, area3, area4, area5, pi = 3.14159;
    scanf("%f %f %f", &a, &b, &c);

    area1 = .5*a*c;
    area2 = pi*pow(c,2);
    area3 = ((a+b)/2)*c;
    area4 = b*b;
    area5 = a*b;

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", area1, area2, area3, area4, area5);
    printf("%f", pow(c, 2));
    return 0;
}