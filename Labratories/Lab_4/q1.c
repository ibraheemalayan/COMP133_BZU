#include <stdio.h>

int main(){

    printf("Enter the mark:");

    double mark;
    
    scanf("%lf", &mark);
    
    if (mark >= 60){
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}