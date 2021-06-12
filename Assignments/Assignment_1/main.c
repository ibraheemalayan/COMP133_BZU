#include <stdio.h>

void magic_numbers(int, int, int);

int main(){
    
    int left, right, m;

    printf("Enter the left bound: ");
    scanf("%d", &left);
    printf("Enter the right bound: ");
    scanf("%d", &right);
    printf("Enter the digit m: ");
    scanf("%d", &m);

    magic_numbers(left, right, m);
      
    return 0;
}


void magic_numbers(int left, int right, int digit){

    for(int i = left ; i <= right ; i ++){

        int sum = 0;

        int temp = i;

        int is_magical = 1; // used as boolean (still_magical)

        // to skip the (sum >= rem) comparison for the first digit if it was 0 since the sum also will be 0 and that leads to a false negative
        if ( temp % 10 == 0 ){
            temp = temp / 10;
            // if zero is skiped and it is the prohibited digit
            if( digit == 0 ){
                temp = 0; // to skip the loop
                is_magical = 0; // mark as not magical
            } 
        }

        while (temp > 0){
            
            int rem = temp % 10;
            temp = temp/10;

            if (rem == digit || sum >= rem){
                is_magical = 0; // mark as not magical
                break;
            }

            sum = sum + rem;

        }

        if (is_magical){
            printf("%d ", i);
        }

    }

    printf("\n"); // add a line at the end so the terminal prompt doesn't come on the same line with the output

}

// Author: ibraheemalyan (https://www.ibraheemalyan.dev/)
// BZU Student ID : 1201180