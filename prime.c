#include<stdio.h>
int main(){

    int a,w;

    scanf("%d",&a);
    for(int i=0; i<=a;i++){
     a%i;
    }

    if(a%i==0){
        printf(" Composite");
    }
    else{
        printf("Prime");
    }


return 0;
}



