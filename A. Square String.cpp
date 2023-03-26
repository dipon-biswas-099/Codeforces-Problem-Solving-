#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l = s.size();
        if(l%2!=0)
        {
            cout<<"No"<<"\n";
            continue;

        }
        for(int j=0;j<l/2;j++)
        {
            if(s[j]!=s[j+l/2])
            {
                cout<<"No"<<"\n";
                break;
            }
            else
                {
                  cout<<"Yes"<<"\n";
                  break;
                }
        }

    }

    return 0;
}
