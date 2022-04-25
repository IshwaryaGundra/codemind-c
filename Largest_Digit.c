#include<stdio.h>
int maxdigit(int n)
{
    int d,max=0;
    while(n>0)
    {
       d=n%10;
       if(max<d)
       {
           max=d;
       }
       n=n/10;
    }
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",maxdigit(n));
}