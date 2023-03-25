#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i;
    fgets(a,sizeof(a),stdin);
        //int len = strlen(a);
        if(a[0]<97)
        {

            printf("%s",a);
        }
        else
        {
            a[0]-= 32;
            printf("%s",a);
        }

    return 0;
}
