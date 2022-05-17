#include<stdio.h>
int main()
{
    int n,arr[100],i,k,rev=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
    while(arr[i]!=0)
    {
        k=arr[i]%10;
        rev=rev*10+k;
        arr[i]=arr[i]/10;
    }
    printf("%d ",rev);
    }
}