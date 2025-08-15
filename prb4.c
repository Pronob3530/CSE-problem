#include<stdio.h>
int main()
{
    float centimeter;
    printf("Enter your value in centimeter:");
    scanf("%f",&centimeter);
    float meter,kilometer;
    meter = centimeter/100;
    kilometer = meter/1000;
    printf("Your value in Meter:%.2f\nYour value in Kilometer:%.2f",meter,kilometer);
    return 0;
}
