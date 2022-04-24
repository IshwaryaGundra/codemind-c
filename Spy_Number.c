#include<stdio.h>
int isspy(int n, int s ,int p)
{
    int d;
    while(n>0)
    {
    d=n%10;
    s=s+d;
    p=p*d;
    n=n/10;
    }
    if(s==p)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,s=0,p=1;
    scanf("%d",&n);
    if(isspy(n,s,p))
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}