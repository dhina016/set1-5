//28 - Given a number N and an array of N elements, print each element with its index.
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
        printf("%d %d\n",a[b],b);
    }
   // printf("\n%d",a[c/2]);
   getch();
}