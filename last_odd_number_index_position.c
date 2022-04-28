#include<stdio.h>
int oddel(int n,int * arr)
{
    int i;
    for(i=0;i<n;i++)
    {
       // if(arr[i]%2!=0)
       // {
            
     //   }
   }
    return i-1;
}
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("%d",oddel(n,arr));
}