#include<stdio.h>
#include<stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = true;
    bool isSenior = true;

    if(isStudent ){
        if(isSenior){
            printf("You get a student discout of 10\n");
            printf("You get a seniour discout of 20\n");
            price *= 0.7;
            // means, price = price * 0.7
        }
        else{
            printf("You get a student discount of 10\n");
            price *= 0.9;
        }
    }
    else{
        if(isSenior){
            printf("You get a seniour discount of 20\n");
            price *= 0.8;
        }
    }

    printf("The price of the ticket is $%.2f \n",price);

}