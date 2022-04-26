#include<stdio.h>
#include<math.h>
int length(int n)
{
    int c=0;
    while(n!=0)
    {
      c++;
      n=n/10;
    }
    return c;
}

int disarium(int n)
{
    int d,len,num,s=0;
    num=n;
    len=length(n);
    while(num>0)
    {
       d=num%10;
       s=s+pow(d,len);
       num=num/10;
       len--;
    }
    if(s==n)
    {
        return 1;
    }
    else
    return 0;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    if(disarium(n))
    {
        printf("True");
    }
    else
    printf("False");
}