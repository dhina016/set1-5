//38 - Write a program to swap 2 numbers using bitwise operators.
#include <stdio.h>

void main() 
{
   int a,b,c,k=0,temp,d;
   scanf("%d%d",&c,&a);
    c=c+a;
    a=c-a;
    c=c-a;
   printf("%d %d",c,a);
   getch();
}