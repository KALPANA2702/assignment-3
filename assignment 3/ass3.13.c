//check weather a number is divisible by 2 or 3
#include<stdio.h>
int main()
{
    int a,d,f;
    printf("enter any number");
    scanf("%d",&a);
    if((d=a%2==0)&&(f=a%3==0))
    {
        printf("%d is divisible by 2 and 3",a);
    }
    else
    {
        printf("%d is not divisible by 2 and 3",a);
    }
    return 0;
}