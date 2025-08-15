#include<stdio.h>
int main()
{
    int number;
    printf("number:");
    scanf("%d",&number);
    if(number==0)
    {
        printf("%d is 0..",number);
    }
    else if(number%2==0)
    {
        printf("This number is Even..");
    }
    else{
            printf("This number is Odd..");
    }
    return 0;
}
