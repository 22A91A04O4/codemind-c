#include<stdio.h>
int main()
{
    int a,i,d=0;
   scanf("%d",&a);
   for (i=1;i<=a;++i)
   {
       d+=i;
   }
   printf ("%d",d);
   return 0;
}