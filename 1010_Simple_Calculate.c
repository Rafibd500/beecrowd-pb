#include<stdio.h>
int main(){
    int code, unit, code2, unit2;
    float unit_price, total1, unit_price2, total2, total;
    scanf("%d %d %f", &code, &unit, &unit_price);
    scanf("%d %d %f", &code, &unit2, &unit_price2);
    total1 = (float)unit*unit_price;
    total2 = (float)unit2*unit_price2;
    total = total1+total2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);


    return 0;
}