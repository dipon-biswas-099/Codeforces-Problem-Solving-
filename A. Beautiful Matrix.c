#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ara[5][5];
    int x,y;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&ara[i][j]);
            if(ara[i][j]==1)
            {
                x =i;       // position
                y =j;
            }
        }
    }

                                  /* int ans = abs(2-x)+abs(2-y);
        // eii past tuk abs function.       printf("%d", ans);*/ // abs part tuku korle niser part er kono dorkar nai .
    int ans;
    int row_cng, col_cng;


    if(x>2)
    {
        row_cng =(x-2);
    }
    else
    {
        row_cng =(2-x);
    }

    if(y>2)
    {
        col_cng =(y-2);
    }
    else
    {
        col_cng =(2-y);
    }

    ans = row_cng + col_cng;
    printf("%d\n",ans);

    return 0;
}
