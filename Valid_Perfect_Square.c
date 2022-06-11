#include<stdio.h>
int main()
{
    int arr[100],i,n,j,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<arr[i];j++)
        {
            if(j*j==arr[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}