#include<stdio.h>
int main(){

    int arr[105];
    int n,ans;
    scanf("%d",&n);
    int ev_c=0;
    int OD_c=0;

    for(int i=1;i<n; i++)
    {
       scanf("%d",&arr[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i]%2==0)
            ev_c++;
        else
            OD_c++;
    }
    if(ev_c==1)
    {
        for(int i=1; i<=n;i++)
        {
            if(arr[i]%2==0)
            {
                ans =i;
            }
        }
    }
   if(OD_c==1)
    {
        for(int i=1 ;i<=n;i++)
        {
            if(arr[i]%2!=0)
            {
                ans =i;
            }
        }
    }

    printf("%d",ans);


return 0;
}
