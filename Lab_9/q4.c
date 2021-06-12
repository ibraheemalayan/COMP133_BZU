#include <stdio.h>

int rcrsv_fibonacci(int);
int dynmc_fibonacci(int);


int main()
{

    int x;
    printf("Enter a number:");
    scanf("%d", &x);

    printf("Recursive : %d \n", rcrsv_fibonacci(x));
    printf("Dynamic : %d \n", dynmc_fibonacci(x));
}
// 1 2 3 4 5 6  7 index
// 0 1 1 2 3 5  8 seq
// 0 1 2 4 7 12 20 ser
int rcrsv_fibonacci(int n)
{

    if( n == 0 ){
        return 0;
    }else if( n == 1 ){
        return 1;
    }else{
        return rcrsv_fibonacci(n - 1) + rcrsv_fibonacci(n - 2);
    }
}

// returns the sum of the fibnacci series until the num(th) term 
int dynmc_fibonacci(int num)
{   
    num ++;
    if( num == 1 || num == 0 ){
        return 0;
    }else if( num == 2 ){
        return 1;
    }
    

    int a = 0; // n-2
    int b = 1; // n-1
    int c = a + b; // n

    for(int n = 3 ; n < num ; n ++){
        a = b;
        b = c;
        c = a + b;
    }

    return c;
}