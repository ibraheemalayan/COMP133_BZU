#include <stdio.h>

void dispense(int to_return, int* r_200, int* r_100, int* r_50, int* r_20, int* r_10, int* r_5, int* r_2, int* r_1){

    if ( to_return >= 200 ){
        *r_200 += 1;
        to_return -= 200;
    }else if ( to_return >= 100 ){
        *r_100 += 1;
        to_return -= 100;
    }else if ( to_return >= 50 ){
        *r_50 += 1;
        to_return -= 50;
    }else if ( to_return >= 20 ){
        *r_20 += 1;
        to_return -= 20;
    }else if ( to_return >= 10 ){
        *r_10 += 1;
        to_return -= 10;
    }else if ( to_return >= 5 ){
        *r_5 += 1;
        to_return -= 5;
    }else if ( to_return >= 2 ){
        *r_2 += 1;
        to_return -= 2;
    }else if ( to_return >= 1 ){
        *r_1 += 1;
        to_return -= 1;
    }else{
        return;
    }
    
    dispense(to_return, r_200, r_100, r_50, r_20, r_10, r_5, r_2, r_1);

}

int main(){
    
    int paid, due;

    printf("Enter the paid amount:");
    scanf("%d", &paid);
    printf("Enter the due amount:");
    scanf("%d", &due);

    int to_return, r_200, r_100, r_50, r_20, r_10, r_5, r_2, r_1;

    r_200 = 0;
    r_100 = 0;
    r_50 = 0;
    r_20 = 0;
    r_10 = 0;
    r_5 = 0;
    r_2 = 0;
    r_1 = 0;

    to_return = paid - due;

    dispense(to_return, &r_200, &r_100, &r_50, &r_20, &r_10, &r_5, &r_2, &r_1);

    printf("The machine will dispense %d 200s\n", r_200);
    printf("The machine will dispense %d 100s\n", r_100);
    printf("The machine will dispense %d 50s\n", r_50);
    printf("The machine will dispense %d 20s\n", r_20);
    printf("The machine will dispense %d 10s\n", r_10);
    printf("The machine will dispense %d 5s\n", r_5);
    printf("The machine will dispense %d 2s\n", r_2);
    printf("The machine will dispense %d 1s\n", r_1);
    

    return 0;
}