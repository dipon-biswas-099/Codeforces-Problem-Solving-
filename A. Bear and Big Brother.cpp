#include<bits\stdc++.h>
using namespace std;
int main()
{
        int a, b,i;
        int cnt=0;
        cin>>a>>b;
       if(a>b)
       {
           cnt =0;
       }
       else
       {
           while(a<=b)
           {
               a=a*3;
               b=b*2;
               cnt++;
           }
           printf("%d ",cnt);
       }
        // printf("%d ",cnt);


    return 0;
}
