#include<stdio.h>
int main()
{
    int d,w,y;
    scanf("%d",&d);
    w=d/365;
    y=(d%365)/7;
    printf("%d
%d",w,y);
    
}