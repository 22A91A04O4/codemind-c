#include<stdio.h>
int main()
{
    int k,t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    k=(2*t*s*b*512)/1024;
    printf("%d KB",k);
}