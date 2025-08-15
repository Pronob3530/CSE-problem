#include<stdio.h>
int main()
{
    int a,b;
    printf("Which number multiplication number do you want?\nEnter your number:");
    scanf("%d",&a);
    for(b=1;b<=10;b++)
 {
   printf("%d x %d=%d\n",a,b,a*b);
 }
   
    return 0;
    
}