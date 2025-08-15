#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter 1st number:");
    scanf("%f",&a);
    printf("Enter 2nd number:");
    scanf("%f",&b);
    if (a==b)
    {
        printf("Numbers are equal.");
    }
    else{
        printf("Numbers are not equal.");
    }
    return 0;
}