#include <stdio.h>

void rcrsv_read(int, int, int[]);
void print_arr_rvrse(int, int[]);

int main()
{

    int x;
    printf("Enter the length of the set:");
    scanf("%d", &x);

    int arr[x];

    rcrsv_read(0, x, arr);

    print_arr_rvrse(x, arr);
}

void rcrsv_read(int i, int n, int arr[])
{

    if( i+1 < n ){


        scanf("%d ", &arr[i]);

        return rcrsv_read(++ i, n, arr);
    }
}

void print_arr_rvrse(int n, int arr[])
{

    if( n != 0 ){

        n --;

        printf("%d ", arr[n]);

        return print_arr_rvrse(n, arr);
    }
}