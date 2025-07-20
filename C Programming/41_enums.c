#include<stdio.h>

typedef enum{
    SUNDAY=1, MONDAY=2, TUESDAY=3, WEDNESDAY=4, THURSDAY=5, FRIDAY=6, SATURDAY=7
}Day;

int main(){

    /* enums = A user defined data types that consists of 
               a set of named integer constants.
               Benefit : Replaces numbers with readable names*/   
    
    Day today = SUNDAY ;

    if( today == SUNDAY || today == SATURDAY){
        printf("It's the Weekend");
    }
    else{
        print("");
    }

    return 0;

}