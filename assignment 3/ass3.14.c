//check weather a number is divisible by 7 or 3
#include<stdio.h>
int main()
{
    int a,d,f;
    printf("enter any number");
    scanf("%d",&a);
    if(d=a%7==0)
    {
        printf("%d is divisible by 7",a);
    }
    else if(f=a%3==0)
    {
        printf("%d is divisible by 3",a);
    }
    else
    {
        printf("%d is not divisible by 7 and 3",a);
    }
    
    return 0;
}