//23 - Given a number N and an array of N integers, print the minimum element.
#include <stdio.h>

void main() 
{
   int a[10],b,c,k=0,tot=0;
   scanf("%d",&c);
    for(b=0;b<c;b++)
    {
        scanf("%d",&a[b]);
    }
    k=a[0];
    for(b=0;b<c;b++)
    {
        if(a[b]<k)
        {
            k=a[b];
        }
    }
    printf("%d",k);
   getch();
}