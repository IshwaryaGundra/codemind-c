#include<stdio.h>
#include<math.h>
int dif(int n,int *arr)
{
    int os=0,i,res;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            os=os+arr[i];
        }
    }
    return os;
}
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",dif(n,arr));
}