#include <stdio.h>

double in_to_cm(double x){

    return x * 2.14;
}
double get_area(double len){
    return len * len;
}

int main(){

    printf("Enter length in inches:");

    double inches;
    
    scanf("%lf", &inches);

    double cms = in_to_cm(inches);

    double in_area = get_area(inches);
    double cm_area = get_area(cms);

    printf("The Area in inches is : %lf\n", in_area);
    printf("The Area in cms is : %lf\n", cm_area);

    return 0;
}