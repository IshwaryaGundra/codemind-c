#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c=0;
    scanf("%d",&n);
    printf("%d ",a);
    printf("%d ",b);
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}