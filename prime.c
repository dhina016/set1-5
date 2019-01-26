#include <stdio.h>

void main()
{
	int a,i,count=0;
    scanf("%d",&a);
        count=0;
        for(i=1;i<=a/2;i++)
        {
            if(a%i==0)
            {
                count++;
                }
            }
            if(count==1)
            {
                printf("yes");
                }
                else
                {
                   printf("no"); 
                    }
    getch();
}
