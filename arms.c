#include <stdio.h>

void main()
{
	int a,i,tot=0,b,l=0,arm=0,temp;
    scanf("%d",&a);
    b=a;
    while(b)
    {
        b/=10;
        l++;
        }
    b=a;
    while(b)
    {
        temp=b%10;
        b=b/10;
        tot=1;
        for(i=0;i<l;i++)
        {
            tot*=temp;
            }
        arm+=tot;
        }
        if(arm==a)
        {
            printf("yes");
            }
            else
            {
                printf("no");
                }
    
    getch();
}
