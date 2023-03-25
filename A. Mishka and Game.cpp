#include<bits/stdc++.h>
using namespace std;
int main()
{

    int M,C, n, Miska=0,Crish=0, draw =0;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>M>>C;
        if(M>C)
            Miska++;
        else if(C>M)
            Crish++;
        else if(C==M)
            draw++;
    }
    if(Miska>Crish)
        cout<<"Mishka"<<endl;
    else if(Crish>Miska)
        cout<<"Chris"<<endl;
    else if(Crish==Miska )
        cout<<"Friendship is magic!^^"<<endl;



    return 0;
}
