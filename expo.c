#include <stdio.h>

void main()
{
	int a,i,tot=1,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
        tot*=a;
        }
        printf("%d",tot);
    getch();
}
