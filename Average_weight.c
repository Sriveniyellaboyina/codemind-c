#include<stdio.h>
int main()
{
    int avg,boy1,boy2;
    scanf("%d%d%d",&avg,&boy1,&boy2);
    float boy3=(3*avg)-boy1-boy2;
    printf("%.0f",boy3);
}