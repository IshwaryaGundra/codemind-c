#include<stdio.h>
int avg(int n,int *arr)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
   // printf("%d",s);
   // printf("%d",s%n);
    for(i=0;i<n;i++)
    {
    if(s/n==arr[i])
    {
       // printf("%d",s%n);
        return 1;
        break;
    }
    //return 0;
    }
    return 0;
}
int main()
{
    int n,i,arr[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(avg(n,arr))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}