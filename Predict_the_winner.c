#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a[100],i,j,s=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            k=k+a[i];
        }
        else
        {
            s=s+a[i];
        }
    }
    m=abs(k-s);
    if(m%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}