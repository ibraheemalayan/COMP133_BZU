#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, max_idx;
 
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        max_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] > arr[max_idx])
                max_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[max_idx], &arr[i]);
    }
}

int main(){

    int size;

    printf("Enter the length of the array:");
    scanf("%d", &size);
    
    int a[size];

    for (int i = 0 ; i < size ; i ++){
        printf("Enter a number:");
        scanf("%d", &a[i]);
    }
    
    printf("array before sort = [");
    for (int i = 0 ; i < size ; i ++){
        printf("%d,", a[i]);
    }
    printf("]\n");

    selectionSort(a, size);

    printf("array after sort = [");
    for (int i = 0 ; i < size ; i ++){
        printf("%d,", a[i]);
    }
    printf("]\n");
    
    return 0;
}