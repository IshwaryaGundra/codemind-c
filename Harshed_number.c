#include<stdio.h>
int main()
{
    int num,n,r=0,sum=0;
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    if(n%sum==0)
        printf("True");
    else
        printf("False");
}