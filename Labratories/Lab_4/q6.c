#include <stdio.h>

int main(){

    int min = 0;
    printf("Enter number:");
    scanf("%d", &min);

    int size = 5;

    for( int i = 0 ; i < size-1 ; i ++){
        
        printf("Enter number:");
        int temp;
        scanf("%d", &temp);
        if (temp < min){
            min = temp;
        }
    }

    printf("Smallest int is %d \n", min);
    

    return 0;
}