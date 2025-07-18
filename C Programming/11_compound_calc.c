#include<stdio.h>
#include<math.h>

int main() {

    double principal = 0.0;
    double rate = 0.0;
    int years = 0.0;
    int timesCoumpounded = 0.0;
    double total = 0.0;

    printf("Compound Interest Calculator \n");

    printf("Enter the principal => ");
    scanf("%lf", &principal);

    printf("Enter the interest rate => ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the number of years (t) => ");
    scanf("%d", &years);

    printf("Enter number of times compounded per year (n) => ");
    scanf("%d",&timesCoumpounded);

    total = principal * pow(1 + rate / timesCoumpounded , timesCoumpounded * years);
    printf("After %d years, total => %.2lf \n",years,total );

    return 0;

}

// to run command if any error shown
// gcc compound_calc.c -o compound_calc -lm
// ./compound_calc