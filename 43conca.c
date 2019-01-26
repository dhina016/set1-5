//43 - Write a program to concatenate two strings without using strcat() function.
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
       z[k]=x[i];
       k++;
       i++;
    }
   z[k]='\0';
   printf("%s",z);
   getch();
}