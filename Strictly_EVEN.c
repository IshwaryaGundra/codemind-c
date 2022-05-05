#include<stdio.h>
int main()
{
    int n,arr[100],i,ec=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    if(arr[i]%2==0)
    {
      ec++;
      
    }
    }
    
   // printf("%d
",ec);
    
    for(i=0;i<n;i++)
    {
    if(arr[i]%2==0&&i%2==0)
    {
      c++;
     
    }
    }
     //printf("%d",c);
    if(ec==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}