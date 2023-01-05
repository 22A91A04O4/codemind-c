#include<stdio.h>
int main()
{
    int s=0,i,n,t,r;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}