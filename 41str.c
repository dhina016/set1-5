//41 - Given a string S and a number K, print the string K times.
#include <stdio.h>

void main() 
{
   int a,b=0,c=1,k=0,tot=0,i;
   char z[50];
    scanf("%d",&a);
    scanf("%s",z);
    for(i=0;i<a;i++)
    {
    printf("%s ",z);
    }
   getch();
}