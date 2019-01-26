//30 - Given two times in hr:min format subtract(abs value) them and print in the same format.
#include <stdio.h>

void main() 
{
   int a,b=0,c,d,e;
    scanf("%d%d%d%d",&a,&c,&d,&e);
    a=d-a;
    c=e-c;
    printf("%dH %dM",a,c);
   getch();
}