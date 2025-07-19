#include<stdio.h>
#include<string.h>

int main(){

    char item[40] = "";
    float price = 0.0f;
    int quantity = 0;
    char curreny = '$';
    float total = 0.0f; 

    printf("****************************************** \n");
    printf("  \n");

    printf("What item would you like to buy ? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1];

    printf("Price of each item ? ");
    scanf("%f",&price);

    printf("How much is the quantity ? ");
    scanf("%d",&quantity);

    total = price * quantity;
    printf("You have bought %d %s",quantity,item);
    printf("$%.2f",total);

    printf("  \n");
    printf("  \n");

    printf("****************************************** \n");
    return 0;
}
