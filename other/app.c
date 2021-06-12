#include <stdio.h>
#include <math.h>

double get_distance(double, double, double, double);

double get_distance(double x1, double y1, double x2, double y2){

    double d = sqrt( pow( (x2 - x1) , 2) + pow( (y2, y1) , 2) );
    return d;
}

int main(){
    FILE *txt_file, *out_file;
    txt_file = fopen("in.txt", "r");
    double x1, x2, y1, y2;
    // File is written like : (x1, y1), (x2, y2)
    fscanf(txt_file, "(%lf, %lf), (%lf, %lf)", &x1, &y1, &x2, &y2);

    fclose(txt_file);

    double d = get_distance(x1, y1, x2, y2);

    out_file = fopen("output.file", "w");
    fprintf(out_file,"The Distance between the points is : %lf", d);

    fclose(out_file);

    return 0;
}