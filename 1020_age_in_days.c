#include <stdio.h>

int main() {
    int n, year, month, days;
    scanf("%d", &n);
    year = n/365;
    n %= 365;
    month = n/30;
    n %= 30;
    days = n;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, days);
    

    return 0;
}