#include<stdio.h>
int gcd(int a, int b)
{
    if(a==0)
    return b;
    if(b==0)
    {
        return a;
    }
    if(a==b)
    return a;
    if(a>b)
    {
        a=a-b;
        b=b;
        return gcd(a,b);
    }
    if(b>a)
    {
        b=b-a;
        a=a;
        return gcd(a,b);
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
}