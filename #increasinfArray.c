#include<stdio.h>
int main(){

    int n,arr[200005];
    scanf("%d",&n);
    int move=0;
    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            move+=(arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
    }
    printf("%d\n",move);




return 0 ;
}
