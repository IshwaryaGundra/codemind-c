#include<stdio.h>
int main()
{
    int n,prime=0,c=0,rev=0,r,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            prime++;
        }
    }
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    for(j=1;j<=rev;j++)
    {
        if(rev%j==0)
        {
            c++;
        }
    }
    if(prime==2&&c==2)
    {
        printf("circular prime");
    
    }
    else if(prime==2 && c>2)
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
}