//write a program to check weather a number is three digit number or not
#include<stdio.h>
int main()
{
int a;
printf("enter a number");
scanf("%d",&a);
if((a>=100)&&(a<=999))
 {
    printf("%d is three digit number",a);
 }
 else
  {
    printf("%d is not a three digit number",a);
  }
return 0;
} 