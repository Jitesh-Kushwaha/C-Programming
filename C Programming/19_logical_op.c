// logical operator = Used to modifyy or combine boolean expressions
// && - AND
// || - OR
// ! - NOT

#include<stdio.h>

int main(){

    int temp = 0.0;
    printf("Enter temperature => ");
    scanf("%d", &temp);
    
    if(temp >= 0 && temp <= 30){
        printf("The temperaure is GOOD \n");
    }
    else{
        printf("The temperature is BAD \n");
    }

    return 0;
}