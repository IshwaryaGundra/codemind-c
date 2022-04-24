#include<stdio.h>
int rev(int n,int sum)
{
    int d;
    while(n!=0)
    {
       d=n%10;
       sum=sum*10+d;
       n=n/10;
    }
    return sum;
    if(sum<-2147483648||sum>2147483647)
    {
        return 0;
    }
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    printf("%d",rev(n,sum));
}