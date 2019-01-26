#include <stdio.h>

void main()
{
	int i,l=0,b;
    scanf("%d",&b);
    while(b)
    {
     b=b/10;
     l++;
        }
        printf("%d",l);
    getch();
}
