//write a program to check find greatest among three given number
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
  printf("%d is greater",a);
}
else
{
  if((b>c))
   {
    printf("%d is greater",b);
   }
   else
       {
        printf("%d is greater",c);
       }
return 0;
}  