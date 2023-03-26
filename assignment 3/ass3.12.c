//wap to check weather a program is lower case or upper case
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z')
       {
        printf("the ENTERED character is in upper case");
       }
    else if(ch >='a' && ch <='z')
         {
          printf("the ENTERED character is in lower case");
         }   
       else
       {
        printf("the charcter you have enter is not an alphabet");
       }
    
       return 0;
}