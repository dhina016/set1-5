//37 - Write a program to swap 2 numbers.
#include <stdio.h>

void main() 
{
   int a,b,c,k=0,temp,d;
   scanf("%d%d",&c,&a);
    temp=a;
    a=c;
    c=temp;
   printf("%d %d",c,a);
   getch();
}