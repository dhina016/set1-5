//50 - Given a number N find whether it is a power of 2.
#include <stdio.h>

void main() 
{
   int b,c,k=2,tot=0,l;
   scanf("%d",&b);
    while(k<=b)
    {
        if(b==k)
        {
            printf("Yes");
            tot=1;
        }
        k*=2;
    }
    if(tot!=1)
    {
        printf("No");
    }
    getch();
}