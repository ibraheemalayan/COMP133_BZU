#include <stdio.h>
#include <math.h>

double find_area(double r, double h){

    double area  = 2 * M_PI * r * h + M_PI * pow(r,2);
    return area;

}

double find_cost(double area, double cost_per_cm){
    return area * cost_per_cm;
}

int main(){

    double r, h, cost_per_cm;

    printf("Enter radius in cm:");
    scanf("%lf", &r);

    printf("Enter height in cm:");
    scanf("%lf", &h);

    printf("Enter cost per square cm in dollars:");
    scanf("%lf", &cost_per_cm);

    printf("Cost of one cylinder is %.2lf$", find_cost(find_area(r, h), cost_per_cm));

    return 0;
}