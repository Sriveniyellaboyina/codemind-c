#include<stdio.h>
int main()
{
    int cp;
    int sp;
    scanf("%d%d",&cp,&sp);
    float l=cp-sp;
    float lp=(l*100)/cp;
    printf("%.2f",lp);
}