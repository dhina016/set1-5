
#include <stdio.h>

void main()
{
	int a,b,i;
    scanf("%d%d",&a,&b);
    if(a>0||b>0||a<b)
    {
        for(i=a+1;i<b;i++)
        {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
        }
    }
        else
        {
            printf("Invalid");
        }
    getch();
}
