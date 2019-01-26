//39 - Find the maximum among 10 numbers.
#include <stdio.h>

void main() 
{
   int a[10],b,c,k=0,tot=0;
    for(b=0;b<10;b++)
    {
        scanf("%d",&a[b]);
    }
    k=a[0];
    for(b=0;b<10;b++)
    {
        if(a[b]>k)
        {
            k=a[b];
        }
    }
    printf("%d",k);
   getch();
}