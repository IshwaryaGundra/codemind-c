#include<stdio.h>
int main()
{
    int n,m,i,k,sum=0;
    scanf("%d",&n);
    k=n*n;
    while(k>0)    
    {
        
    m=k%10;    
    sum=sum+m;    
    k=k/10;    
    }
    if(sum==n)
    {  
        printf("Neon Number");
    }
     else
    {
     printf("Not Neon Number");
    }
}