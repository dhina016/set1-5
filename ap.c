//21 - Find the sum of an Arithmetic Progression till N terms given N,A,D.
#include <stdio.h>

void main() 
{
   int a,b,c,k=0,tot=0;
    scanf("%d%d%d",&a,&b,&c);
   while(k!=a)
   {
       tot+=b;
       b+=c;
       k++;
   }
   printf("%d",tot);
   getch();
}