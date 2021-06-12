#include <stdio.h>

void sum_and_print(int sum[4][4], int a[4][4], int b[4][4]){

    for (int i = 0 ; i < 4 ; i ++){
        for (int k = 0 ; k < 4 ; k ++){
            sum[i][k] = a[i][k] + b[i][k];
        }
    }

}
int main(){

    const int SIZE = 5;
    
    int a[4][4] = {
        {1,1,1,1},
        {8,1,1,1},
        {1,1,1,1},
        {8,1,1,1}
    };
    int b[4][4] = {
        {2,2,2,2},
        {2,2,2,2},
        {2,2,2,2},
        {2,2,2,2}
    };;

    int sum[4][4];

    sum_and_print(sum, a, b);

    
    printf("sum={\n");
    for (int i = 0 ; i < 4 ; i ++){
        printf("\t{ ");
        for (int k = 0 ; k < 4 ; k ++){
            printf("%d, ", sum[i][k]);
        }
         printf("},\n");
    }
    
    
    
    return 0;
}