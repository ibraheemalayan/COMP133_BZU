#include <stdio.h>

double round(double);

double round(double x){

    double d = (int) ( (x * 100) + 0.5 )  / 100.0;

    return d;
}

int main(){

    printf("Enter Value to round :");
    
    double x;
    
    scanf("%lf", &x);

    double d = round(x);

    printf("The Rounded is : %lf\n", d);

    return 0;
}