#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    if(n>0)
    {
       sum=n*(n+1)/2;
    }
    printf("%d",sum);
    return 0;
}