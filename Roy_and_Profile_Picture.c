#include<stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d%d",&n,&m);
    while(m--)
    {
        scanf("%d%d",&a,&b);
        if(a>=n && b>=n)
        {
            if(a==b)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
        else
        {
            printf("UPLOAD ANOTHER
");
        }
    }
}