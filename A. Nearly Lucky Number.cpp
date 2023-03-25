#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin>>a;
    int cnt=0;
    while(a!=0)
    {
        if(a%10==4 || a%10==7)
        {
            cnt++;
        }
            a=a/10;
    }
    if(cnt==4 || cnt==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO";
    }


    return 0;
}
