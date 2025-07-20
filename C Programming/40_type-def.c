#include<stdio.h>

typedef char String[50];

int main(){

    /*typedef = reserved keyword that gives an existing datatype a "nickname"
                Helps simplify complex types & improves code readability
                
                typedef existing_type new_name*/


    String name = "Jitesh Kushwaha";
    printf("%s \n", name);

    return 0;
}