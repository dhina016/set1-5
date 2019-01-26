//24 - Given a number N and an array of N integers, print the sorted array.
#include <stdio.h>

void main() 
{
   int a[10],b,c,k=0,temp,d;
   scanf("%d",&c);
    for(b=0;b<c;b++)
    {
        scanf("%d",&a[b]);
    }
    for(b=0;b<c;b++)
    {
        for(d=b+1;d<c;d++)
        {
            if(a[b]>a[d])
            {
                temp=a[b];
                a[b]=a[d];
                a[d]=temp;
            }
        }
    }
    for(b=0;b<c;b++)
    {
        printf("%d ",a[b]);
    }
   // printf("\n%d",a[c/2]);
   getch();
}