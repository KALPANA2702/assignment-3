//calculate to print profit or loss percentage of cost price and selling price of a product
#include<stdio.h>
int main()
{ 
   float cp,sp,p,l,pp,lp;
{
printf("enter the cost price");
scanf("%f",cp);
}
{
printf("enter the selling price");
scanf("%f",sp);
}
p=sp-cp;
l=cp-sp;
if(sp>cp)
  {
    pp=((p*100)/cp);            //pp is profit percentage
    printf("the profit percentage is %f",pp);
  }
else if
   {
    lp=((l*100)/cp);          //lp is loss percentage
    printf("the loss percentage is %f",lp);
   }
else  {
printf("no profit or loss");
     }
return 0;
}
