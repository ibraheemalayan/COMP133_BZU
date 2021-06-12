#include <stdio.h>

int is_vowel(char c){
    if ( c == 'A' || c == 'a' || c == 'O' || c == 'o' || c == 'U' || c == 'u' || c == 'E' || c == 'e' || c == 'I' || c == 'i'){
        return 1;
    }
    return 0;
}

int main(){

    printf("Enter the char:");

    char c;
    
    scanf("%c", &c);
    
    if (is_vowel(c)){
        printf("Vowel\n");
    } else {
        printf("Constant\n");
    }

    return 0;
}