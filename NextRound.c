#include<stdio.h>
int main(){

    int n,k;
    scanf("%d%d",&n,&k);
    int arr[55];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>=arr[k] && arr[i]>0)
            ans=ans+1;
    }
    printf("%d\n",ans);





return 0;
}
