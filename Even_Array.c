#include<stdio.h>
int isevenarray(int n,int*arr)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            c++;
        }
    }
   // printf("%d",c);
    if(c==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(isevenarray(n,arr))
    {
        printf("True");
    }
    else
    {
       printf("False");
    }
}