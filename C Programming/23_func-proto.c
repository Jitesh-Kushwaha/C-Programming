#include<stdio.h>
#include<stdbool.h>

void hello(char name[], int age);
// above is a function is prototype

bool ageCheck();

int main(){

    hello("Spongebob", 30);

    if(ageCheck(30)){
        printf("You are odl enough to work at krusty krab. \n");
    }
    else{
        printf("You must be 16+ to work at Krusty Krab. \n");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello, %s \n", name);
    printf("You are %d years old \n", age);
}

bool ageCheck(int age){
    if( age >= 16){
        return true;
    }
    else{
        return false;
    }
}