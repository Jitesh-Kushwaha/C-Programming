#include<stdio.h>
#include<stdbool.h>

int main(){

    // ternary opearator ? = shorthand for if-else statements ;
    // (condition) ? value_if_true : value_if_false ;

    int hrs = 12;
    int min = 30;
    char *meridiem = (hrs < 12 ) ? "AM" : "PM";

    printf("%02d:%02d %s \n", hrs, min, meridiem);

    return 0;
}