#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ,even =0,odd=0,x;
        cin>>n;
        n=n*2;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0)even++;
            else odd++;
        }
        if(even==odd)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }


    return 0;
}
