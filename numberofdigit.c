#include <stdio.h>
int main()
{
   long long int a;
  long long int count=0;

   scanf("%lld",&a);
   while(a!=0)
   {
       a=a/10;
       count++;
   }

   printf("%lld digits",count);
    return 0;
}
