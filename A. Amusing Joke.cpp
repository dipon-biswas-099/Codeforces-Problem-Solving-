#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,Final;
    cin>>a>>b>>c;
    Final = a+b;
    sort(c.begin(),c.end());
    sort(Final.begin(),Final.end());
    if(c==Final)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

    return 0 ;
}
