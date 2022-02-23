#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//5 1 3 5 3 5 1 5 1 7 0
    }
    for(i=0;i<n-1;i++)//1
    {
     c=1;
     for(j=i+1;j<n;j++)
     {
         if(arr[i]==arr[j])
         {
             c++;
         }
     }
     if(c%2==0)
     {
         p++;
     }
    }
    printf("%d",p);
}