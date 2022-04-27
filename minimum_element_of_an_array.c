#include<stdio.h>
int min(int*arr ,int n)
{
    int i,m=arr[0];
    for(i=0;i<n;i++)
    {
    if(m>arr[i])
    {
        m=arr[i];
    
    }
    }
    return m;

}
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",min(arr,n));
}