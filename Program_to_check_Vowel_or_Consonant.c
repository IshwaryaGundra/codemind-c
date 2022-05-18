#include<stdio.h>
int main()
{
    char c;
    int lc,vc;
    scanf("%c",&c);
    lc=(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u');
    vc=(c=='A'|| c=='E'||c=='I'||c=='O'||c=='U');
    if(lc||vc)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}