#include<stdio.h>
int main()
{
    int a,b,sum=0,i;
    printf("1st integer:");
    scanf("%d",&a);
    printf("2nd integer:");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
    sum += i;
    }
    printf("sum of %d to %d=%d",a,b,sum);
    return 0;
}
