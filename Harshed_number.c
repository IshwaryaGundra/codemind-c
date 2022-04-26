#include<stdio.h>
int isharsnum(int n)
{
    int num, d,s=0;
    num=n;
    while(num>0)
    {
    d=num%10;
    s=s+d;
    num=num/10;
    }
    if(n%s==0)
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
   if(isharsnum(n))
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}