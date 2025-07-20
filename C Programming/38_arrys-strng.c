#include<stdio.h>
#include<string.h>

int main(){

    char name[4][25] = {0};
    int rows = sizeof(name) / sizeof(name[0]);

    for(int i=0; i<rows; i++){
        printf("Enter a name => ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strlen(name[i]) -1 ] = '\0';
    }

    for (int i=0; i<rows; i++){
        printf("%s \n", name[i]);
    }
    return 0;
}