// written after the exam (not sure if it is the exact code I submitted)

#include <stdio.h>

float get_avg(){

    float sum = 0;
    int count = 0;

    // Doesn't exceed means can reach but not exceed ( <= )
    while (sum <= 1000 )
    {
        float i;

        scanf("%f", &i);

        sum += i;
        count ++;

    }
    
    return sum / count;

}



int main(){
    
    printf("starting..\n");

    float res = get_avg();

    printf("res > %f\n", res);

    return 0;
}
