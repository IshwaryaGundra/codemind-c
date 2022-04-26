#include<stdio.h>
int reverse(int num)
{
    int d,s=0;
    while(num>0)
    {
        d=num%10;
        s=s*10+d;
        num=num/10;
    }
    return s;
    
}
int adam(int n)
{
    int k,rev,num,p,m;
    k=n*n;
    rev=reverse(n);
    m=rev*rev;
    p=reverse(m);
    if(p==k)
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
    if(adam(n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}