#include<stdio.h>
int ispersq(int n)
{
    int i,x,flag;//66
    for(i=0;i<n;i++)
    {
        x=i*i;
    if(x==n)
    {
        flag=1;
        break;
    }
    }
    if(flag==1)
    
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
    int n;
    scanf("%d",&n);
    if(ispersq(n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}