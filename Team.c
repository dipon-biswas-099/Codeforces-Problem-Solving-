#include<stdio.h>
int main(){

    int N,a,b,c;
    scanf("%d",&N);

    int solve =0;

    for(int i=0;i<N;i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(a+b+c>=2)
        {
            solve++;
        }

    }
    printf("%d\n",solve);







return 0;
}
