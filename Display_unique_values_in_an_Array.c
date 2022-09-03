#include <stdio.h>
#include <stdlib.h>
void uniqueEle(int array[], int n){
   int i,j;
   int count = 1;
   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         if(array[i] == array[j] && i != j)
         break;
      }
      if(j == n ){
         printf("%d ",array[i]);
         ++count;
      }
   }
   if (count==1)
   {
       printf("-1");
   }
}
int main(){
   int n,i;
//printf("
Enter no: of elements : ");
   scanf("%d",&n);
   int array[n];
  // printf("
enter the array elements : ");
   for(i = 0; i < n; i++){
      scanf("%d",&array[i]);
   }
   uniqueEle(array, n);
   return 0;
}