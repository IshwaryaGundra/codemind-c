#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        sum=(float)(sum+(1.0/i));
    
    
    }
    printf("%0.2f ",sum);
    return 0;
    
}