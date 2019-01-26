//48 - Given a number N followed by N numbers print the average(integer) of the N numbers.
#include <stdio.h>

void main() 
{
   int a[10],b,c,k=0,tot=0,l;
   scanf("%d",&c);
    for(b=0;b<c;b++)
    {
        scanf("%d",&a[b]);
    }
    for(b=0;b<c;b++)
    {
        k+=a[b];
    }
    k=k/c;
    printf("%d",k);
    getch();
}