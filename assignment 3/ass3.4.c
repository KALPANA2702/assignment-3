//write a program to check weather a number is an even or an odd without using % operator
#include<stdio.h>
int main()
{
int a;
printf("enter a number");
scanf("%d",&a);
if(a&1)
 {
    printf("%d is an odd number",a);
 }
 else
  {
    printf("%d id an even number",a);
  }
return 0;
} 