//42 - Write a program to compare two strings without using strcmp() function, print the greater string or if equal print any one string.
#include <stdio.h>

void main() 
{
   int a,b=0,c=1,k=0,tot=0,i;
   char z[50],x[50];
    scanf("%s",z);
    scanf("%s",x);
    i=0;
    while(z[i]!='\0')
    {
       i++; 
    }
    k=i;
     i=0;
    while(x[i]!='\0')
    {
       i++; 
    }
    tot=i;
    if(k>tot)
    {
        printf("%s",z);
    }
    else
    {
         printf("%s",x);
    }
   getch();
}