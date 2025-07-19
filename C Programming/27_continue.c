#include<stdio.h>

// continue = Skip current cycle of the loop

int main(){

    for(int i = 1; i <=10; i++){
        if(i ==4 ){
            continue;
        }
        printf("%d \n", i);
    }

}