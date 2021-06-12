#include <stdio.h>

int calculate_cost(int kw){

    int cost = 0;

    while(kw != 0){

        if (kw <= 300){
            cost += kw * 9;
            kw = 0;
        }else if (kw <= 600){
            int temp = kw - 300;
            cost += temp * 8;
            kw -= temp;
        }else if (kw <= 1000){
            int temp = kw - 600;
            cost += temp * 6;
            kw -= temp;
        }else{
            int temp = kw - 1000;
            cost += temp * 5;
            kw -= temp;
        }
    }
    
    return cost;
}

int main(){

    int num;

    printf("Enter the number of customers:");
    scanf("%d", &num);
    
    int IDs[num], usage[num], cost[num];

    int total_usage = 0;
    int total_cost = 0;

    for (int i = 0 ; i < num ; i ++){

        printf("\nEnter the customer ID:");
        scanf("%d", &IDs[i]);

        printf("Enter the usage of customer %d:", IDs[i]);
        scanf("%d", &usage[i]);

        total_usage += usage[i];
        

        cost[i] = calculate_cost(usage[i]);

        total_cost += cost[i];

    }

    printf("Results :\n\tID\tKW\tCost\n");

    for (int i = 0 ; i < num ; i ++){

        printf("\t%d\t%d\t%d\t\n", IDs[i], usage[i], cost[i]);

    }

    printf("Total\t\t%d\t%d\n", total_usage, total_cost);
    
    
    return 0;
}