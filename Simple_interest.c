#include<stdio.h>
int main ()
{
    int principle,time,rate;
    printf("Simple Interest Rate");
    printf("\n\n\nEnter principle:");
    scanf("%d",&principle);
    printf("Enter time:");
    scanf("%d",&time);
    printf("Enter rate:");
    scanf("%d",&rate);
    int value = principle*time*rate/100;
    printf("Your simple interest is: %d",value);
    return 0;
}
