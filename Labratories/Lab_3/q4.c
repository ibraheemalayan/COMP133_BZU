#include <stdio.h>

double round(double);

double round(double x){

    double d = (int) ( (x * 100) + 0.5 )  / 100.0;

    printf("The Rounded is : %lf\n", d);

    return d;
}

int main(){

    printf("Enter Value to round :");
    
    double x;
    
    scanf("%lf", &x);

    round(x);

    return 0;
}