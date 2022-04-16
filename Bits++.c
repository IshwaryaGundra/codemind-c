#include<stdio.h>
#include<string.h>
int main(){
  int i,n,s=0;
  char x[4];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%s",&x);
    if((strcmp(x,"X++")==0)||(strcmp(x,"++X")==0))
    {
        s=s+1;
    }
    else if((strcmp(x,"X--")==0)||(strcmp(x,"--X")==0))
    {
        s=s-1;
    }
    s=s;
  }

printf("%d
",s);

return 0;
}