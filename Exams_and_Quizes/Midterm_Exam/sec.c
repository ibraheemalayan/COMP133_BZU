#include <stdio.h>

float Calculate_cost(float kw){

    float cost = 0;


    if (kw > 100){
        // price of first 100 kw is 1 D
        cost = 100 * 1;

        kw -= 100;

        cost += kw * 2;
    } else {
        cost = kw * 1;
    }

    return cost;

}




int main(){
    
    printf("starting..\n");

    // float kw = 20;

    // printf("res > %f\n", kw));

    printf("enter kw values:\n");

    float cost_sum = 0, count = 0, max_cost = 0;
    
    
    while ( 1 )
    {   
        float kw = 0;

        scanf("%f", &kw);

        if( kw == -1 ){
            break;
        }

        float cost = Calculate_cost(kw);

        count ++;
        cost_sum += cost;

        if (cost > max_cost){
            max_cost = cost;
        }

        printf("Cost of %f kw is : %f D\n", kw, cost);
    }

    float avg_cost = cost_sum / count;

    printf("\n\nMaximum cost: %f", max_cost);
    printf("\n\nAverage cost: %f", avg_cost);

    return 0;
}
