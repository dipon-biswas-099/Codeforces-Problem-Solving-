#include<stdio.h>
int main(){

    int a;
    scanf("%d",&a);

    printf("The factor of %d is ",a );
    for(int i=1; i<a;i++){

        if(a%i==0){
                printf("%d,",i);
            }

    }



return 0;
}


