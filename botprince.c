#include <stdio.h>

void main() 
{
   int a[10][10],b,i,j,rb,cb,rp,cp,v;
   for(v=2;v<6;v++)
   {
   b=v;
    for(i=0;i<b;i++)
    {
         for(j=0;j<b;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<b;i++)
    {
         for(j=0;j<b;j++)
    {
        if(a[i][j]==1)
        {
            rb=i;
            cb=j;
        }
        if(a[i][j]==2)
        {
            rp=i;
            cp=j;
        }
    }
    }
    printf("%d,%d  %d,%d\n",rb,cb,rp,cp);
    if(rb>=rp)
    {
        while(rb!=rp)
        {
            printf("Up ");
            rb--;
        }
    }
    if(rb<=rp)
    {
        while(rb!=rp)
        {
            printf("Down ");
            rb++;
        }
    }
    if(cb>=cp)
    {
        while(cb!=cp)
        {
            printf("Left ");
            cb--;
        }
    }
    if(cb<=cp)
    {
        while(cb!=cp)
        {
            printf("Right ");
            cb++;
        }
    }
    printf("\n");
   }
   getch();
}