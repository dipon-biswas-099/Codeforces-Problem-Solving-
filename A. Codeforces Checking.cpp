#include<bits/stdc++.h>
using namespace std;
int main()
{   int t,i;
    cin>>t;
    char a[t];
    char an[10] = {'c','o','d','f','o','r','c','e','s'};
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t;i++)
    {
        if(a[i]==an[0] || a[i]==an[1] || a[i]== an[2] || a[i]== an[3] || a[i]== an[4] || a[i]== an[5] ||a[i]== an[6] ||a[i]== an[7] ||a[i]== an[8] ||a[i]== an[9] ||a[i]== an[10]  )
            //if(a[i] == an[10])
           {
               cout<<"YES"<<endl;

           }
           else
            cout<<"NO"<<endl;

    }

}
