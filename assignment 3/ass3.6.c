//write a program to to print greater between two number.print one number of both are same
#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
if(a>b)
  {
    printf("%d is greater than %d",a,b);
  }
  if(a<b)
    {
      printf("%d is less than %d",a,b);
    }
    if(a==b)
     {
      printf("value of both number are equal"); 
     }
return 0;
} 