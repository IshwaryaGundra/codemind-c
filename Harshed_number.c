#include<stdio.h>
int main()
{
    int n,d,s=0,t=0,k,r=0;
    scanf("%d",&n);
    k=n/2;
    t=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        r=r+d;
        s=k*r;
    }
    if(t%r==0||t/r==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}