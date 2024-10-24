#include<stdio.h>
int main(){
    char name[100];
    double sal, sell, bonus;
    scanf("%s", name);
    scanf("%lf %lf", &sal, &sell);
    bonus = sell*.15;

    sal+=bonus;

    printf("TOTAL = R$ %.2lf", sal);


    return 0;
}