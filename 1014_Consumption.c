#include<stdio.h>
int main(){
    int x;
    float y, avg;
    scanf("%d %f", &x, &y);

    avg = (float)x/y;

    printf("%.3f km/l\n", avg);

    return 0;
}