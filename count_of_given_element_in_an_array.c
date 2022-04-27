#include<stdio.h>
#include<math.h>
int count(int n,int *arr,int se)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
       if(arr[i]==se)
       {
           c++;
           //return 1;
          //break;
       }
    }
    return c;
       //i++;
    

}
int main()
{
    int n,arr[100],i,se;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    printf("%d",count(n,arr,se));
}