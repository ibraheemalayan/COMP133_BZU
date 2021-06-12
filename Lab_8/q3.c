#include <stdio.h>
#include <string.h>

int is_base(char str[]){

    int last_char = strlen(str) - 1 ;

    if (str[last_char] == 'H' && str[last_char-1] == 'O'){
        return 1;
    }
    return 0;
}

int main(){

    char comp[10];

    printf("Enter the complex:");
    scanf("%s", comp);
    
    if (is_base(comp)){
        printf("\n\nthe complex is a base\n");
    }else{
        printf("\n\nthe complex is not a base\n");
    }    
    
    return 0;
}