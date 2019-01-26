#include <stdio.h>

void main()
{
	int i,l=0,b,a[100],c;
    scanf("%d%d",&b,&c);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        }
        if(c<b)
        {
        for(i=0;i<c;i++)
        {
            l+=a[i];
            }
            printf("%d",l);
        }
    getch();
}
