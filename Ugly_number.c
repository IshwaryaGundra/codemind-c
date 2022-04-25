#include<stdio.h>
int maxDivide(int a, int b)
{
    while (a % b == 0)
        a = a / b;
    return a;
}
int isugnum(int n)
{
      n = maxDivide(n, 2);
    n = maxDivide(n, 3);
    n = maxDivide(n, 5);
 
    return (n == 1) ? 1 : 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isugnum(n))
    {
        printf("Ugly Number");
    }
    else
    {
         printf("Not Ugly Number");
        
    }
}