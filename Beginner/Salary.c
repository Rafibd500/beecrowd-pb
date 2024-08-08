#include<stdio.h>
int main(){
    int employee_num, hourly_rate;
    float work_hour,salary;
    scanf("%d %d", &employee_num, &hourly_rate);
    scanf("%f", &work_hour);
    salary = work_hour*hourly_rate;

    printf("NUMBER = %d\nSALARY = U$ %.2f", employee_num, salary);
    
    return 0;
}