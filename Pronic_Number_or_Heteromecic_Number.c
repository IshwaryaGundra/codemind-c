#include<stdio.h>
int pronic(int n,int x,int flag)
{
    int sum;
    for(x=0;x<=n;x++)
    {
        sum=x*(x+1);
       if(sum==n)
        {
         flag=1;
         break;
        }
    }
    if(flag==1)
    {
        return 1;
    }
      return 0;
}
int main()
{
    int n,x,flag;
    scanf("%d",&n);
    if(pronic(n,x,flag))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}