#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&m);
    c=pow(a,b);
    printf("%d",c%m);
}