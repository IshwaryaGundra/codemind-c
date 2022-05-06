#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],k,s=0,h=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        s=s+arr[i];
    }
     for(i=n/2;i<n;i++)
    {
        h=h+arr[i];
    }
    printf("%d
%d",s,h);
    
}
