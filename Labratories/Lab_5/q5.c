#include <stdio.h>

int is_prime(int);

int main(){
    
    int num;

    printf("Enter number to check if it is a prime number: ");
    scanf("%d", &num);

    if (is_prime(num)){
        printf("number %d is a prime number\n", num);
    } else {
        printf("number %d is not a prime number\n", num);
    }

    return 0;
}

int is_prime(int num){

    for (int i = 2; i < num ; i ++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;

}