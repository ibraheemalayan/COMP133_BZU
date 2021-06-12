#include <stdio.h>

void get_sum(int arr[], int out[]){

    int res[10];

    for (int i = 0 ; i < 10 ; i ++){

        int temp = arr[i];
        int s = 0;

        while(temp != 0){

            int rem = temp % 10;
            temp /= 10;

            s += rem;
        }

        out[i] = s;
    }


}

int main(){

    int arr[10];

    for (int i = 0 ; i < 10 ; i ++){
        printf("Enter a number :");
        scanf("%d", &arr[i]);
    }

    int res[10];
    get_sum(arr, res);

    printf("\nInput Array = [");
    for (int i = 0 ; i < 10 ; i ++){
        printf("\t%d, ", arr[i]);
    }
    printf("\b]\n");

    printf("\nSum Array =   [");
    for (int i = 0 ; i < 10 ; i ++){
        printf("\t%d, ", res[i]);
    }
    printf("\b]\n");





    return 0;
}

// Author: ibraheemalyan (https://www.ibraheemalyan.dev/)
// BZU Student ID : 1201180