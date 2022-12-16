#include<stdio.h>
int main()
{
    int t,m,s,h;
    scanf("%d",&t);
    h=t/3600;
    int a=t-(h*3600);
    m=a/60;
    s=a-(m*60);
    printf("H:M:S-%d:%d:%d",h,m,s);
}