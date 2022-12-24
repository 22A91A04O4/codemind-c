#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    m=n/4;
    if(n%4==0)
    {
        printf("%d",m);
    }
    else 
    {
        printf("%d",m+1);
    }
}