#include<stdio.h>
int abun(int n)
{
    int i,s=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(n>s)
    {
        return 0;
    }
    else
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(abun(n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}