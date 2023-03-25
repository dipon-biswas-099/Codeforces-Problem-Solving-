#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int inpt;
        cin>>inpt;
        if(inpt >= 1900)
        {
            cout<<"Division 1"<<"\n";
        }
        else if(inpt>=1600 && inpt<= 1899)
        {
            cout<<"Division 2"<<"\n";
        }
         else if(inpt>=1400 && inpt<= 1599)
        {
            cout<<"Division 3"<<"\n";
        }
         else if( inpt<= 1399)
        {
            cout<<"Division 4"<<"\n";
        }
    }

}
