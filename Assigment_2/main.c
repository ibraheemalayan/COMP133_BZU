#include <stdio.h>

void calculate_cost(float, float*, float*);
float round_money(float);

int main(){

    FILE *in_fptr, *out_fptr;
    in_fptr = fopen("usage.txt","r");
    out_fptr = fopen("charges.txt","w");

    int month, year;

    fscanf(in_fptr, "%d", &month);
    int status = fscanf(in_fptr, " %d", &year);

    fprintf(out_fptr, "Charges for %d/%d\n", month, year);

    float hours;
    int ID;

    while ( fscanf(in_fptr, "%d", &ID ) == 1 ){
        
        fscanf(in_fptr, "%f", &hours);
    
        float cost, avg_ph;
    
        calculate_cost(hours, &cost, &avg_ph);

        fprintf(out_fptr, "%d %.1f %.2f %.2f\n", ID, hours, round_money(cost), round_money(avg_ph));

    }

    fclose(in_fptr);
    fclose(out_fptr);
      
    return 0;
}

float round_money(float num){

    float mult = num * 1000;

    int rem = ((int) mult) % 10;

    if ( rem >= 5 ){
        mult = mult - rem + 10; 
    }else{
         mult = mult - rem;
    }

    return mult / 1000;
}

void calculate_cost(float in_hours, float* cost, float* avg_ph){

    *cost = 0;
    *avg_ph = 0;

    float hours = in_hours;

    if( hours >= 10 ){
        *cost += 7.99;
        hours -= 10;
    }else{
        *cost += 7.99;
        hours = 0;
    }
    *cost += hours * 1.99;

    *avg_ph = *cost / in_hours;    

}

// Author: ibraheemalyan (https://www.ibraheemalyan.dev/)
// BZU Student ID : 1201180