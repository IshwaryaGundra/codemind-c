#include<stdio.h>
int main()
{
   int n,r,even=0,odd=0,sum=0,c=0;
   scanf("%d",&n);
   while(n>0) 
    { 
        r=n%10; 
         c++;
        if(r%2==0) 
        {
    even++; 
        }
        else 
            
            {
                odd++; 
            }
            n=n/10;
    } 
    if(even==c)
    {
        printf("Even");
    }
    else if(odd==c)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
        
}