
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int i,n;
    int arr[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<arr[i]<<endl;
     for(i=n;i>0;i--)
    {
       cout<<arr[i];
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
