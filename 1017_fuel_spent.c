#include<stdio.h>
int main(){
    int total_time, avg_speed;
    float fuel, distance;
    scanf("%d %d", &total_time, &avg_speed);
    distance = total_time * avg_speed;
    fuel = distance/12;

    printf("%.3f\n", fuel);

    return 0;
}