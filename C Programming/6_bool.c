#include<stdio.h>
#include<stdbool.h>

int main(){

    bool isOnline = true;

    if(isOnline){
        printf("You are Online");
    }
    else{
        printf("You are Offline");
    }

    return 0;
}

// int = whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)
// double = double precision decimal number (8 bytes)
// char = single character (1 byte)
// char [] = array of characters (size varies)
// bool = true or false (1 byte, requires <stdbool.h> )
