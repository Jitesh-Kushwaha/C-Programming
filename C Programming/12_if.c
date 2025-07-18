#include<stdio.h>

int main(){

    int age = 0;

    printf("Enter your age => ");
    scanf("%d", &age);

    if( age >= 18){
        printf("You are an Adult \n");
    }

    else if ( age >60 ){
        printf("You are a senior citizen \n");
    }

    else{
        printf("You are a Child \n");
    }

    return 0;
}