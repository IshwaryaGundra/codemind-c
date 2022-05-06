#include<stdio.h>
int main()
{
    int n,i,arr[100],k,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            break;
        }
        else
        {
            s=s+arr[i];
            
        }
    }
   printf("%d",s);
    
}
