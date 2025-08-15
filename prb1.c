#include<stdio.h>
int main()
{
    int days,year,month,week,day,remaining_days;
    printf("Enter Days:");
    scanf("%d",&days);
    year = days/365;
    remaining_days = days%365;
    month = remaining_days/30;
    remaining_days = remaining_days%30;
    week = remaining_days/7;
    day = remaining_days%7;

    printf("Year:%d",year);
    printf("\nMonth:%d",month);
    printf("\nweek:%d",week);
    printf("\nday:%d",day);
    return 0;
}
