#include <stdio.h>
#include <stdlib.h>

int isPrime(int);

int main(){
    
    printf("enter num: ");

    int num;

    scanf("%d", &num);

    if (isPrime(num)){
        printf("%d is prime", num);
    }else{
        printf("%d is not prime", num);
    }


    return 0;
}

int isPrime(int num){
    int i;
    int isPrime = 1;

    for (i=2; i< num && isPrime; i++){
        if (num % i == 0){
            isPrime = 0 ;
        }
    }
    printf("i is %d followed by", i);
    
    return isPrime;
    }
