#include<stdio.h>
int oddel(int n,int * arr)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            s=0;
            s=s+i;
        }
   }
    return s;
}
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
   /* for(i=0;i<n;i++)
    {
        printf("%d
",arr[i]);
        
    }
    */
    printf("%d",oddel(n,arr));
}