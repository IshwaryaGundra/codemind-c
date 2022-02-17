#include<stdio.h>
int main()
{
    int a,b,lcm=1,t=2;
    scanf("%d%d",&a,&b);
    while(a>=t&&b>=t)
    {
    if(a%t==0&&b%t==0)
    {
          a=a/t;
          b=b/t;
          lcm=lcm*t;
    }
    else
    {
        t++;
    }
    }
    printf("%d",lcm*a*b);
    return 0;
}