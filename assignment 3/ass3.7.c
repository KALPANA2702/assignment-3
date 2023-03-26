//write a program to check weather the root of given quadartic eqn is are real & distinct,real and equal or imaginary roots
#include<stdio.h>
int main()
{
int a,b,c,d;
float x,y;
printf("enter the cofficient of x^2,x and constant");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d==0)
 {
    printf("both roots are equal");
 }
 if(d<0)
  {
    printf("both roots are imaginary");
  }
  if(d>0)
   {
    printf("boths roots are real and distinct");
   }
return 0;
} 