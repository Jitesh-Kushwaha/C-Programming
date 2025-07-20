#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getcompChoice();
int getuserChoice();
void checkWinner(int getuserChoice, int getcompChoice);

int main(){

    srand(time(NULL));
    printf("** ROCK PAPER SCISSORS *** \n");

    int userChoice = getuserChoice();
    int compChoice = getcompChoice();

    switch(userChoice){
        case 1:
            printf("You Choose ROCK! \n");
            break;
        case 2:
            printf("You Choose PAPER! \n");
            break;
        case 3:
            printf("You Choose SCISSOR! \n");
            break;
    }

    switch(compChoice){
        case 1:
            printf("Computer Choose ROCK! \n");
            break;
        case 2:
            printf("Computer Choose PAPER! \n");
            break;
        case 3:
            printf("Computer Choose SCISSOR! \n");
            break;
    }

    checkWinner(userChoice, compChoice);

    return 0;
}

int getcompChoice(){
    return (rand() % 3) + 1;
}
int getuserChoice(){

    int choice =0;

    do{
        printf("Choose an Option: \n");
        printf("1. ROCK \n");
        printf("2. PAPER \n");
        printf("3. SCISSOR \n");
        printf("Enter Your Choice => ");
        scanf("%d", &choice);

    }while(choice < 1 || choice > 3);

    return choice;
}
void checkWinner(int userChoice, int compChoice){

    if(userChoice == compChoice){
        printf("Its's A TIE \n");
    }
    else if((userChoice == 1 && compChoice == 3) ||
            (userChoice == 2 && compChoice == 1) ||
            (userChoice == 3 && compChoice == 2)){
        printf("You WIN!! \n");
    }
    else{
        printf("You Lose \n");
    }
}