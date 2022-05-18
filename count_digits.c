#include<stdio.h>
int main()
{
    int n,i,arr[100],r,rev=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]!=0)
        {
        while(arr[i]!=0)
        {
            r=arr[i]%10;
            rev=rev*10+r;
            arr[i]=arr[i]/10;
            c++;
        }
        }
        else if(arr[i]==0)
        {
            c=1;
        }
        printf("%d ",c);
    }
    
}