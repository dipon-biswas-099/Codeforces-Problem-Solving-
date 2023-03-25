#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n ,M=0,B=0;
    cin>>n;

    while(n--)
    {
        int t;
        cin>>t;
        vector<int>a;
        a.resize(t);
        for(i=0;i<a.size();i++)
        {
            cin>>a[i];

        }
        for(i=0;i<a.size();i++)
        {
          if(a[i]%2==0)
          {
              M= M+a[i];
          }
          else if(a[i]%2!=0)
          {
            B=B+a[i];

          }
        }
          if(M>B)
          {
              cout<<"Yes"<<"\n";
          }
          else
          {
              cout<<"No"<<"\n";
          }

    M=B=0;
    }



    return 0;
}
