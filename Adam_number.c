#include<stdio.h>
int main()
{
    int n,temp,temp2,k,rev=0,sq,d,rev2=0,p;
    scanf("%d",&n);
    temp=n;
    sq=n*n;
    while (n!=0) 
   {
    d = n % 10;
    rev= rev * 10 + d;
    n /= 10;
   }
   p=rev*rev;
   temp2=p;
   while (p!= 0) 
   {
    d = p% 10;
    rev2= rev2* 10 + d;
    p/= 10;
   }
   if(sq==rev2)
   {
       printf("True");
   }
   else
   printf("False");
   
}