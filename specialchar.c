//36 - Count the number of special characters in a given string
#include <stdio.h>

void main() 
{
   char a[100],b;
   int c,des=0,i;
   gets(a);
   i=0;
   while(a[i]!='\0')
   {
       if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]==' '||a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
       {
          
       }
       else
       {
           des+=1; 
       }
       i++;
   }
    printf("%d",des); 
   getch();
}