#include<stdio.h>
int main()
{
    int m,n,i,s1=0,s2=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
            s1=s1+i;
        }
    }
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            s2=s2+i;
        }
    }
    if(m==s2 && n==s1)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}