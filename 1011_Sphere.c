#include<stdio.h>
#include<math.h>
int main(){
    int r;
    double pi = 3.14159, volume;

    scanf("%d", &r);

    volume = ((double)4/(double)3)*pi*(double)pow(r,3);
    
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}