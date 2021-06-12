#include <stdio.h>

int is_vowel(char c){
    if ( c == 'A' || c == 'a' || c == 'O' || c == 'o' || c == 'U' || c == 'u' || c == 'E' || c == 'e' || c == 'I' || c == 'i'){
        return 1;
    }
    return 0;
}

int main(){

    int SIZE = 10;

    printf("Enter the length of the String:");
    scanf("%d", &SIZE);
    
    char str[SIZE];

    
    printf("\nEnter a String:");
    scanf("%s", str);

    int count = 0;

    for (int i = 0 ; i < SIZE ; i ++){
        if ( is_vowel(str[i]) ){
            count ++;
        }
    }

    printf("number of vowels was %d\n", count);
    
    
    return 0;
}