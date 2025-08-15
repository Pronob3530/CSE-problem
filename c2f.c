#include<stdio.h>
int main()
{
    float a,b,c,d;
    float multiples,divide,sum;
    printf("Enter your areas temperature in (C) : ");
    scanf("%f",&a);
    b = 5;
    c = 32;
    d = 9;
    multiples = a*d;
    divide = multiples/b;
    sum = divide+c;
    printf("Your areas temperature in (F) :%f",sum);
    return 0;
}
