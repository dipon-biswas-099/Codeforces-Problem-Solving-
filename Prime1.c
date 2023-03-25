#include <stdio.h>
int main() {
   int num ;
   int flag = 0;
   scanf("%d",&num);
   for(int i=2 ; i < num/2 ; i++) {
      if(num%i == 0) {
         printf("Composite");
         flag = 1;
         break;
      }
   }
   if(flag == 0) {
      printf("Prime");
   }
}
