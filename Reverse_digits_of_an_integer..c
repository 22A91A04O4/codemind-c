#include<stdio.h>
int main()
{
    int i,r,s=0,q,n;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
       r=q%10;
       q=q/10;
       s=s*10+r;
    }
    printf("%d",s);
}