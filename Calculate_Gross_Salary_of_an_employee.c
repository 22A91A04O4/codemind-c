#include<stdio.h>
int main()
{
    float g,b,p,d,h;
    scanf("%f%f%f",&b,&d,&h);
    p=(b)*0.12;
    g=p+b+d+h;
    printf("%.2f
%.2f",p,g);
}