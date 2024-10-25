#include<stdio.h>
int main(){
    int money, count;
    int note[7] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &money);
    printf("%d\n", money);
    for (int i = 0; i < 7; i++)
    {
        count = money/note[i];
        money = money%note[i];
        printf("%d nota(s) de R$ %d,00\n", count, note[i]);
    }

    return 0;
}