//wap to take lenrth of triangle as input and show weather a triangle is valid or not
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+c)>b)&&((a+b)>c)&&((b+c)>a))
    {
      printf("the triangle is valid");
    }
    else
    {
     printf("the triangle is not valid");
    }
    return 0;
}