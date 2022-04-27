#include<stdio.h>
#include<math.h>
int diff(int *arr,int n)
{
    int i,j,k=0,s=0,z;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            k=k+arr[i];
        }
        else
        {
            s=s+arr[i];
        }
    }
    z=abs(k-s);
    return z;
}
int main()
{
    int n,arr[100],i,k=0,s=0,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    z=diff(arr,n);
    printf("%d",z);
    return 0;
}