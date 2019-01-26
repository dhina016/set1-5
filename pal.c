#include <stdio.h>
void main()
{
	int b,l=0,a,i,tot=0,j;
    scanf("%d",&a);
    b=a;
   while(b)
    {
     b=b/10;
     l++;
        }
    b=a;
    while(b)
    {
        i=b%10;
        for(j=1;j<l;j++)
        {
        i*=10;
        }
        tot=tot+i;
        l=l-1;
        b/=10;
        }
        if(tot==a)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    getch();
}
