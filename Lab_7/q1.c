#include <stdio.h>

int main(){

    const int SIZE = 5;
    
    int a[SIZE], temp[SIZE];

    int b[] = {5,7,9,1,3};

    printf("Array b = [");
    for (int i = 0 ; i < SIZE ; i ++){

        printf("%d ,", b[i]);
    }
    printf("]\n");

    for (int i = 0 ; i < SIZE ; i ++){

        printf("Enter a number:");
        scanf("%d", &a[i]);
    }

    for (int i = 0 ; i < SIZE ; i ++){

        int temp = b[i];
        b[i] = a[i];
        a[i] = temp;
    }

    printf("Array a = [");
    for (int i = 0 ; i < SIZE ; i ++){

        printf("%d ,", a[i]);
    }
    printf("]\n");

    printf("Array b = [");
    for (int i = 0 ; i < SIZE ; i ++){

        printf("%d ,", b[i]);
    }
    printf("]\n");
    
    return 0;
}