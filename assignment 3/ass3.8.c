//write a program to check weather a given year is leap year or not
#include<stdio.h>
int main()
{
int a;
printf("enter the year");
scanf("%d",&a);
if(a%400==0)
{
    printf("%d is leap year",a);
    
 }
 else
  {
    printf("%d is not a leap year",a);
  }
return 0;
} 