#include<stdio.h>
#include<math.h>
int search(int n,int *arr,int se)
{
    int i;
    for(i=0;i<n;i++)
    {
       if(arr[i]==se)
       {
           return 1;
          //break;
       }
    }
    return 0;
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
    if(search(n,arr,se))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}