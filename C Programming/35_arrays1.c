#include<stdio.h>

int main(){

    int numbers[] = {10, 20, 30, 40, 50, 60};
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char name [] = "Jitesh";

    for(int i=0; i < sizeof(numbers) / sizeof(numbers[0]); i++ ){
        printf("%d \n", numbers[i]);
    }
    return 0;
}