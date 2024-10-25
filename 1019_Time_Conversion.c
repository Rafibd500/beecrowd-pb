#include<stdio.h>
int main(){
    int time, count;
    int arr[3] = {3600, 60, 60};
    scanf("%d", &time);
    for (int i = 0; i < 3; i++)
    {
        count = time/arr[i];
        time = time%arr[i];

        if (i==2)
        {
            printf("%d", time);
        }
        else
        {
            printf("%d:", count);

        }
        
    }
    printf("\n");


    return 0;
}


//IN SIMPLE WAY::
/*
#include <stdio.h>

int main() {
    int N, hours, minutes, seconds;

    // Reading the integer value
    scanf("%d", &N);

    // Calculating hours, minutes, and seconds
    hours = N / 3600;       // 1 hour = 3600 seconds
    N = N % 3600;
    minutes = N / 60;       // 1 minute = 60 seconds
    seconds = N % 60;

    // Printing the result in the required format
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
*/