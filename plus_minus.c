#include<stdio.h>
int main()
{
    char x;
    float a,b,c;
    printf("Enter an operator(+,-,*,/):");
    scanf("%ch",&x);
    printf("Inpur 1st number:");
    scanf("%f",&a);
    printf("Input 2nd number:");
    scanf("%f",&b);

    switch (x)
    {
    case '+':
    printf("Your added value is:%.2f",c=a+b);
    break;
    case '-':
    printf("your subtracted value is:%.2f",c=a-b);
    break;
    case '*':
    printf("Your multiplied value is:%.2f",c=a*b);
    break;
    case '/':
    printf("Your divided value is:%.2f",c=a/b);
    break;
    default:
    printf("%ch is a undefind value.",x);

    }
    return 0;
}

