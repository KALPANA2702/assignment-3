//wap to take marks of 5 subjects.assuming marks from 100 and passing marks is 33.
#include<stdio.h>
int main()
  {
    int maths,physics,biology,chemistry,hindi;
    printf("enter the marks of maths,physics,biology,chemistry,hindi");
    scanf("%d%d%d%d%d",&maths,&physics,&biology,&chemistry,&hindi);
    if((maths>=33)&&(physics>=33)&&(biology>=33)&&(chemistry>=33)&&(hindi>=33))
         {
            printf("the student is pass");
         }
    else
         {
            printf("students is failed");
         }
         return 0;
  }