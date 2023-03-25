#include<stdio.h>


     int main()

{
     long long int a ,b ;
      long long  int sum=0;


    scanf("%lld",&a);

    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("%lld",sum);
return 0;
}
