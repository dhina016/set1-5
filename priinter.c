#include <stdio.h>

void main()
{
	int a,c,i,j,count=0;
    scanf("%d%d",&a,&c);
    for(j=a+1;j<c;j++)
    {
        count=0;
        for(i=1;i<=j/2;i++)
        {
            if(j%i==0)
            {
                count++;
                }
            }
            if(count==1)
            {
             
   printf("%d ",j);
                }
    }
    getch();
}
