//write a program to check weather a number is an even or an odd
#include<stdio.h>
int main()
{
int a;
printf("enter a number");
scanf("%d",&a);
if(a%2==0)
 {
    printf("%d is an even number",a);
 }
 else
  {
    printf("%d id an odd number",a);
  }
return 0;
} 