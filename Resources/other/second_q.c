#include <stdio.h>
#include <math.h>

#define PI 3.14

double get_area(double r){

    double area = r * 2 * PI;
    return area;
}

double get_vol(double r, double h){

    double vol = pow(r, 2) * PI * h;
    return vol;
}

int main(){
    double r, h;
    // File is written like : (x1, y1), (x2, y2)
    printf("Enter r,h: ");
    scanf("%lf,%lf", &r, &h);

    double area = get_area(r);
    double vol = get_vol(r, h);

    printf("The surface area is : %lf and the volume is : %lf", area, vol);

    return 0;
}
