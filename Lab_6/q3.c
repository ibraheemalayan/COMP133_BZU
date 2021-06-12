#include <stdio.h>

void calculate(int a, int b, int* sum, int* sub, int* div, int* mul){

    *sum = a + b;
    *sub = a - b;
    if ( b == 0 ){
        printf("b is undevisable");
        *div = 0;

    }else{
        *div = a / b;
    }
    
    *mul = a * b;

}

int main(){
    
    int a, b;

    printf("Enter the fisrt number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);

    int sum, sub, mul, div;

    calculate(a, b, &sum, &sub, &div, &mul);

    printf("Sum is : %d\n", sum);
    printf("Sub is : %d\n", sub);
    printf("Div is : %d\n", div);
    printf("Mul is : %d\n", mul);
    

    return 0;
}