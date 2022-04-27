#include<stdio.h>
#include<math.h>
int dif(int n,int *arr)
{
    int es=0,os=0,i,res;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es=es+arr[i];
        }
        else
        {
            os=os+arr[i];
        }
    }
    res=abs(es+os);
    return res;
}
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",dif(n,arr));
}