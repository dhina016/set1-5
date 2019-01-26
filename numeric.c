//27 - Validate if a given string is numeric.
#include <stdio.h>

void main() 
{
   char a[100],b;
   int c,des=0,i;
   gets(a);
   i=0;
   while(a[i]!='\0')
   {
       if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]==' ')
       {
           
       }
       else
       {
           des=1;
       }
       i++;
   }
   if(des==1)
   {
       printf("No");
   }
   else
   {
      printf("Yes"); 
   }
   getch();
}