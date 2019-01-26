//40 - Given a number N find print fibonacci series of N numbers
#include <stdio.h>

void main() 
{
   int a,b=0,c=1,k=0,tot=0,i;
    scanf("%d",&a);
    printf("%d ",c);
    for(i=0;i<a-1;i++)
    {
        tot=b+c;
        b=c;
        c=tot;
         printf("%d ",tot);
    }
   getch();
}