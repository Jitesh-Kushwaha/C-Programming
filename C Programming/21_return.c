// return = returns a value back to where you call a function

#include<stdio.h>

int square(int num){
    int result = num*num;

    return num*num;
}

int main(){

    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d \n",x);
    printf("%d \n",y);
    printf("%d \n",z);

    return 0;
}