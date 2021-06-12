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
        int x = i;

        int still_magical = 1;

        if ( x%10 == 0 ) {
            x = x / 10;
        } 

        while (x > 0){
            
            int rem = x % 10;
            x = x/10;

            if (rem == digit || sum >= rem){
                still_magical = 0;// mark as not magical
                break;
            }

            sum = sum + rem;

        }

        if(still_magical){
            printf("%d\n",i);
        }

    }

    printf("\n"); // add a line at the end so the terminal prompt doesn't come on the same line with the output

}

// Author: ibraheemalyan (https://www.ibraheemalyan.dev/)
// BZU Student ID : 1201180