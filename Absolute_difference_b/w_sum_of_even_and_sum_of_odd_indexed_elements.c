#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,suml=0,diff;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
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