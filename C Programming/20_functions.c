#include<stdio.h>

void happyBirthday(char name[], int age){
    printf("\n Happy Birthday To You!");
    printf("\n Happy Birthday To You!");
    printf("\n Happy Birthday To You %s!",name);
    printf("\n Happy Birthday To You!");
    printf("\n Yayy, you are %d years old now \n",age);
}
int main(){

    char name[10] = "";
    printf("Enter Name => ");
    scanf("%s", name);


    int age = 0.0;
    printf("Enter Age => ");
    scanf("%d", &age);

    happyBirthday(name, age);

    return 0;
}