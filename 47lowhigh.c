//47 - Given a number N followed by N numbers find the  lowest and highest  number in the array.
#include <stdio.h>

void main() 
{
   int a[10],b,c,k=0,tot=0,l;
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
    l=a[0];
    for(b=0;b<c;b++)
    {
        if(a[b]>l)
        {
            l=a[b];
        }
    }
    printf("%d %d",k,l);
getch();
}