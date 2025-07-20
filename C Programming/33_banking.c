#include<stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("**** WELLCOME TO THE BANK ****");

    do{
        printf("\nSelect Up An Option:\n");
        printf("1. Check Bank Balance:\n");
        printf("2. Deposit Money:\n");
        printf("3. Withdraw Money:\n");
        printf("4. Exit: \n");
        printf("\nEnter Your Choice => ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance += deposit();
                break;

            case 3:
                balance -= withdraw(balance);
                break;

            case 4:
                printf("\nThank For Visiting The Bank\n");
                break;

            default:
                printf("Inavalid Input! Please Select From 1 - 4\n");

        }

    }while(choice != 4);

    return 0;
}

void checkBalance(float balance){
    printf("Your Current Balance is: $%.2f\n",balance);
    
}

float deposit(){

    float amount = 0.0f;

    printf("\nEnter Amount To Deposit: $");
    scanf("%f",&amount);

    if(amount<0){
        printf("Invalid Amount!\n");
        return 0.0f;
    }
    else{
        printf("Successfully Deposited %.2f \n", amount);
        return amount;

    }
    

    
}
float withdraw(float balance){

    float amount = 0.0f;
    printf("\nEnter Amount To Withdraw: $");
    scanf("%f", &amount);

    if(amount<0){
        printf("Inavlid Amount!");
        return 0.0f;
    }
    else if(amount>balance){
        printf("Insufficient Funds!\nYour Balance is $%f",balance);
        return 0.0f;
    }
    else{
        printf("Successfully Withdrew $%.2f\n", amount);
        return amount;
    }

}