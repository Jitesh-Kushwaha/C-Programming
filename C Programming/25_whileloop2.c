#include<stdio.h>
#include<string.h>

int main(){

    char name[50] = "";

    printf("Enter Your Name => ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1 ] = '\0';

    while(strlen(name) == 0){
        printf("Name cannot be empty! Please enter your name => ");
        fgets(name,sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s \n", name);

}