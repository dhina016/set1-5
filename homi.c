//29 - Given Time in minutes, print it in hours and minutes.
#include <stdio.h>

void main() 
{
   int a,b=0,c;
    scanf("%d",&a);
    while(a>=60)
    {
   if(a>=60)
   {
       a-=60;
       b++;
   }
    }
    printf("%dH %dM",b,a);
   getch();
}