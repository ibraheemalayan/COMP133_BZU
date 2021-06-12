#include <stdio.h>

int main(){

    int size;

    printf("Enter the length of the arrays:");
    scanf("%d", &size);
    
    int a[size], b[size], sum[size];

    printf("Fill the first array:\n");
    for (int i = 0 ; i < size ; i ++){

        printf("Enter a number:");
        scanf("%d", &a[i]);

        sum[i] = a[i];
    }

    printf("Fill the second array:\n");
    for (int i = 0 ; i < size ; i ++){

        printf("Enter a number:");
        scanf("%d", &b[i]);

        
        sum[i] += b[i];
    }
    
    printf("Sum = [");
    for (int i = 0 ; i < size ; i ++){

        printf("%d, ", sum[i]);

    }

    printf("]\n");

    
    return 0;
}