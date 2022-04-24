#include<stdio.h>
int isneon(int n,int k,int s)
{
    int d;
    k=n*n;
    while(k>0)
    {
        d=k%10;
        s=s+d;
        k=k/10;
    }
    if(n==s)
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
    int n,k,s=0;
    scanf("%d",&n);
    if(isneon(n,k,s))
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}