#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=n;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}