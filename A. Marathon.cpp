#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i, t;

    cin>>t;
    while(t--)
    {
        int a[4];

        for(i=0;i<4;i++)
        {
            cin>>a[i];


        }
        int cnt=0;
        for(i=0;i<4;i++)
        {

         if(a[i]>a[0])
            {
                cnt++;

            }
        }
cout<<cnt<<endl;

    }


    return 0;
}
