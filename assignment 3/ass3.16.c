//wap to check weather a program is lower case or upper case
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
    {
        printf("the entered character is a digit");
    }
    else 
    {
        if(ch >=65 && ch <=90)
       {
        printf("the ENTERED character is in upper case");
       }
    else 
    {
    if(ch >=97 && ch <=122)
         {
          printf("the ENTERED character is in lower case");
         }   
       else
       {
        printf("the charcter you have enter a special character");
       }
    }
    }
    
       return 0;
}