#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    int arr[m][n],i,j,max;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(j==0)
                max=arr[j][i];
                if(arr[j][i]>max)
                max=arr[j][i];
            }
            printf("%d
",max);
        }
}