#include <stdio.h>
#include <math.h>

double calculate_area(double a, double b , double c){

    double s = (a+b+c)/2;

    double area  = sqrt( s * (s - a) * (s - b) * (s - c) );

    return area;

}

int check_conditions(double a, double b , double c){
    if ( (a+b) > c && (c+b) > a && (a+c) > b ) {
        return 1;
    }
    return 0;
}

int main(){

    double a, b, c;

    printf("Enter a:");
    scanf("%lf", &a);

    printf("Enter b:");
    scanf("%lf", &b);

    printf("Enter c:");
    scanf("%lf", &c);

    if (check_conditions(a, b, c) == 1){
        printf("Area is %lf\n", calculate_area(a, b, c));
    }else{
        printf("Doesn't satisfy conditions\n");
    }

    return 0;
}