
#include<stdio.h>
int main(){

    char s[102],t[102];

    fgets(s,sizeof(s),stdin);
    fgets(t,sizeof(t),stdin);
    int len = strlen(s)-1;
    for(int i=0;i<len;i++)
    {
        if(s[i]<='Z')
        {
            s[i]+= 32;
        }

        if(t[i]<='Z')
        {
            t[i]+= 32;
        }


    }
    for(int i=0;i<len;i++)
    {
        if(s[i]<t[i])
        {
            printf("-1\n");
            return 0;

        }
        else if(s[i]>t[i])
        {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");

return 0;
}
