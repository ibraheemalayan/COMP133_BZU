#include <stdio.h>

void print_histogram (int []);

void print_histogram (int counters []){

    printf("\nHistogram\n\n"); 

    for ( int i = 0 ; i < 26 ; i ++){

        printf("%c ", i+'a');
        while(counters[i] != 0 ){
            counters[i] --;
            printf("■");
        }
        printf("\n");
    }

}


int main(){

    int arr[27] = {0}; // 27 to count occurness of 26 letters and the last cell is for other chars
    int i;

    FILE *inFile = fopen("story.txt", "r");

    while((i = fgetc(inFile)) != EOF){
        if ( i >= 'a' && i <= 'z' ){
            /* C is a lowercase character */
            i-='a'; 
            arr[i]++;
        }
        else {
            arr[26]++;
        }
    }

    for (i = 0; i < 26; i++){
            printf("%c was used %d times\n", i+'a', arr[i]);
    } 
    
    printf("other: %d\n", arr[26]); 

    print_histogram(arr);

    fclose(inFile);
    return 0;
}

// Author: ibraheemalyan (https://www.ibraheemalyan.dev/)
// BZU Student ID : 1201180