#include<stdio.h>

int add(int x, int y){
    int result = x + y;
    return result;
}

int subtract(int x, int y){
    int result = x - y;
    return result;
}

int main(){
    
    // int result = add(3,4);
    // printf("%d \n",result);

    int result = subtract(3,4);
    printf("%d \n",result);

    return 0;
}