#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            printf("0");
            if(j<=n-1)
            printf("x");
        }
        printf("
");
    }
}