#include <stdio.h>

int is_prime(int);

int main(){
    
    int count = 0;
    for ( int i = 2 ; count < 50; i++ ){
        if (is_prime(i)){
        printf("%d\n", i);
        count ++;
        }
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