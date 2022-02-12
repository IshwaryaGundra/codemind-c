#include<stdio.h>
int main()
{
    int n,i,sum=0,temp,r;
    scanf("%d",&n);
   temp=n;
   while(n>0)
   {
       r=n%10;
       sum=sum*10+r;
       n=n/10;
       
   }
   
   if(temp==sum)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
   return 0;
}