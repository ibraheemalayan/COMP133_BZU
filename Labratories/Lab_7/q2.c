#include <stdio.h>

int main(){

    const int SIZE = 10;
    
    int a[SIZE];

    for (int i = 0 ; i < SIZE ; i ++){

        printf("Enter a number:");
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int min_index = 0;

    for (int i = 0 ; i < SIZE ; i ++){
        if ( a[i] < min ){
            min = a[i];
            min_index = i;
        }
    }

    printf("minimum number is %d and its index was %d\n", min, min_index+1);
    
    
    return 0;
}