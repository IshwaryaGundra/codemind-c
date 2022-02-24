#include<stdio.h>
int main()
{
   int n,rem, rev, temp, start, end;
   scanf("%d%d",&start,&end);
   for(n=start;n<=end;n++)
   {
      temp=n;
      rev=0;
      while(temp)
      {
         rem=temp%10;
         temp=temp/10;
         rev=rev*10+rem;
      }
      if(n==rev)
         printf("%d ",n);
   }
   return 0;
}