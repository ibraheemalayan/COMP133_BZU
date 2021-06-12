#include <stdio.h>

int main(){

    printf("Enter the num:");

    int num;
    
    scanf("%d", &num);
    
    if (num % 3 == 0){
        printf("Divisable By 3\n");
    } else {
        printf("Not divisable By 3\n");
    }

    return 0;
}