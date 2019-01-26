#include <stdio.h>

void main()
{
	int a,i,tot=0;
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        tot=tot+a;
        printf("%d ",tot);
        }
    getch();
}
