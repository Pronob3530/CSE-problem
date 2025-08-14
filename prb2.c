#include<stdio.h>
int main()
{
    float r;
    printf("Enter Radius:");
    scanf("%f",&r);
    float diameter,circumference,area,pi;
    pi = 3.1416;
    diameter = r*2;
    circumference = r*2*pi;
    area = pi*r*r;
    printf("Diameter:%.1f\nCircumference:%.1f\nArea:%.1f",diameter,circumference,area);
    return 0;
}
