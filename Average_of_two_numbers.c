#include<stdio.h>
int main()
{
    float a,b,num;
    float avg;
    scanf("%f%f",&a,&b);
    num=a+b;
    avg=num/2;
    printf("Average of %.f and %.f is: %0.2f",a,b,avg);
}