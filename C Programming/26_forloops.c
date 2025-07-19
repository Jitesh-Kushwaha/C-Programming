#include<stdio.h>

// for loop = Repeat some code a limited no. of times
//          = for(Initialization; Condition; Update)

int main(){

    for(int i = 0; i <= 20; i++){
        printf("%d \n",i);
    }

    printf("********** \n");

    for(int j = 0; j <= 20;j+=2){
        printf("%d \n",j);
    }

    printf("********** \n");

    for(int k = 2; k <= 20; k+=3){
        printf("%d \n",k);
    }

    printf("********** \n");

    for(int m = 10; m >= 0; m--){
        printf("%d \n",m);
    }

    printf("Happy New Year \n");

    return 0;
}