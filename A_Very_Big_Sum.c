#include<stdio.h>
int main()
{
    long int n,i,s=0,arr[100];
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
        s+=arr[i];
    }
    printf("%ld",s);
}