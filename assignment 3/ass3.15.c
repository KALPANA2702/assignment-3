//check weather a number is positive,negative or zero
#include<stdio.h>
int main()
{
    int a,d,f;
    printf("enter any number");
    scanf("%d",&a);
    if(a==0)
    {
        printf("%d is zero",a);
    }
    else if(a>0)
    {
        printf("%d is a positive",a);
    }
    else
    {
        printf("%d is negative",a);
    }
    
    return 0;
}