//101
#include <stdio.h>
#include<conio.h>
int main(void)
{
  char str[50];
	int i,n;
	scanf("%s %d",str,&n);
	int len;
	len=strlen(str);
	for(i=n;i<=len;i++)
	{
		printf("%c",str[i]);
	}
getch();
}
