#include<stdio.h>
int main()
{
    int n,i,sum=0,prd=1,r,dif;
    scanf("%d",&n);
    
   while(n!=0)
    {
      r=n%10;
      sum=sum+r;//7
      prd=prd*r;//12
     n=n/10;
    } 
    dif=prd-sum;
     printf("%d",dif);
    return 0;
    
}