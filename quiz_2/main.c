#include <stdio.h>

int is_complete(int);
void print_completes(int, int);


int main(){
    
    int a, b;

    printf("Enter the a:");
    scanf("%d", &a);
    printf("Enter the b:");
    scanf("%d", &b);

    print_completes(a, b);
    

    return 0;
}

int is_complete(int num){

    int sum_of_odds = 0;
    int sum_of_evens = 0;

    while( num != 0) {
        int rem = num % 10;
        if (rem % 2 == 0){
            sum_of_evens += rem;
        } else {
            sum_of_odds += rem;
        }
        num = num / 10;
    }

    if (sum_of_evens >= sum_of_odds){
        return 1;
    }
    return 0;
}

void print_completes(int a, int b){

    for(int i = a ; i <= b ; i ++){
        if (is_complete(i)){
            printf("%d\n",i);
        }
    }
    
}