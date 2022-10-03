#include<stdio.h>
int main()
{
    int n,arr[100],a,b,i,j=1,k=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        j=(a*(a+1))/2;
        for(i=0;i<a-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<a-1;i++)
        {
            k=k+arr[i];
        }
        b=j-k;
        printf("%d",b);
        
        k=0;
        printf("
");
    }
}