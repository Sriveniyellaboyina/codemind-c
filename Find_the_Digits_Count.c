#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    if (n==0)
    {
        c = 1;
    } else 
    {
        while (n!=0)
        {
            n/= 10;
            c++;
        }
    }

    printf("%d
",c);
}
