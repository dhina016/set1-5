#include <stdio.h>

void main()
{
	int a,c,j,i,tot=0,b,l=0,arm=0,temp;
    scanf("%d%d",&a,&c);
    for(j=a;j<c;j++)
    {
    arm=0;
    l=0;
    tot=0;
    b=j;
    while(b)
    {
        b/=10;
        l++;
        }
    b=j;
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
        if(arm==j)
        {
            printf("%d ",arm);
            }
    }
    getch();
}
