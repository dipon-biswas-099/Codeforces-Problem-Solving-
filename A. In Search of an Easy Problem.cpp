#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000],n,i;
    int ctn=0;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            ctn++;
        }

    }
    if(ctn >= 1)
    {
        cout<<"Hard";
    }
    else
    {
        cout<<"Easy";
    }

    return 0;
}
