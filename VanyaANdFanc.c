#include<stdio.h>
int main(){

int n,h,x;
scanf("%d%d",&n,&h);
int w;
for(int i=1; i<=n; i++)
{
    scanf("%d",&x);
    if(x>h)
        w+=2;

    else
        w++;
}
printf("%d\n",w);


return 0 ;
}
