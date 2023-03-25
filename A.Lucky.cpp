#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,sum1=0,sum2=0;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin >> s;
        int sum1 = s[0] +s[1] +s[2] ;
        int sum2 = s[3] +s[4] +s[5] ;

        if (sum1 == sum2) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }
return 0;
}
