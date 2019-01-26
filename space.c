//33 - Count the number of spaces in given line.
#include <stdio.h>

void main() 
{
   char a[100],b;
   int c,des=0,i;
   gets(a);
   i=0;
   while(a[i]!='\0')
   {
       if(a[i]==' ')
       {
          des+=1; 
       }
       else
       {
           
       }
       i++;
   }
      printf("%d",des); 
   getch();
}