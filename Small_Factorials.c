#include<stdio.h>
int main()
{
    int arr[100],i,fact=1,n,t=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<10)
        {
            for(t=1;t<=arr[i];t++)
            {
                fact=fact*t;
            }
            printf("%d
",fact);
        }
        fact=1;
    }
}