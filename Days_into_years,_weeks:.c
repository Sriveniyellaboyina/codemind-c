#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int year=x/365;
    int z=x%365;
    int week=z/7;
    printf("%d
%d",year,week);
}