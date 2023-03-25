#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a,b,n;
    int sum=0;
    int maxx=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        sum-=a;
        if(maxx<sum)
        {
            maxx=sum;
        }

        sum+=b;
        if(maxx<sum)
        {
            maxx=sum;
        }

    }
    printf("%d",maxx);


    return 0;
}
