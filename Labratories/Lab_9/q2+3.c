#include <stdio.h>

int mul(int ,int);
int div(int ,int);
int pwr(int ,int);

int main(){

    int x,y;
    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter y:");
    scanf("%d", &y);

    printf("Mul : %d \n", mul(x,y));
    printf("Div : %d \n", div(x,y));
    printf("Pwr : %d \n", pwr(x,y));
    
}


int mul(int a, int b){
    if (a > 1){
        return mul(a-1, b) + b;
    } else {
        return b;
    }
    
}

int div(int a, int b){
    if (a < b){
        return 0;
    } else {
        return div(a-b, b) + 1;
    }
    
}

int pwr(int bs, int pr) {
    if (pr == 0)
        return 1;
    else
        return (bs * pwr(bs, pr - 1));
}