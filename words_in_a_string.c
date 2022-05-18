#include<stdio.h>
#include<string.h>
int main()
{
       char str[100];
    int c=0,i;
    scanf("%[^
]s",str);
    for (i=0;str[i]!=NULL;i++)
    {
        if (str[i] == ' ' && str[i+1]!=' ')
            c++;    
    }
    printf("%d
", c+ 1);
}