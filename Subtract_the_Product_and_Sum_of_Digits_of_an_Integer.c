#include<stdio.h>
int main()
{
    int n,i,b,s=0,pro=1;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        s+=b;
        pro*=b;
    }
    printf("%d",pro-s);
}