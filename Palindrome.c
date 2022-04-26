#include<stdio.h>
int pal(int n)
{
    int d,s=0,num;
    num=n;
    while(num>0)
    {
        d=num%10;
        s=s*10+d;
        num=num/10;
    }
    if(n==s)
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
    if(pal(n))
    {
      printf("True");
    }
    else
    {
        printf("False");
    }
    
}