#include<stdio.h>
int main()
{
    int n,a[10],b[10],arr[100],i,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c=a[i]+b[i];
    printf("%d
",c);
    }    
}