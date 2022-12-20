#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,suml=0,diff;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
        else
        {
            suml=suml+a[i];
        }
    }
    diff=abs(sum-suml);
    printf("%d",diff);
}