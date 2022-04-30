#include<stdio.h>
int count(int n,int* arr)
{
    int i,c=0;
    for(i=0;i<n-2;i++)
    {
        if((arr[i])%2==0&& (arr[i+2])%2==0)
        {
            if(arr[i+1]%2!=0)
            {
                c++;
            }
        }
    }
    return c;
}
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",count(n,arr));
}