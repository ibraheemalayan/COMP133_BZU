#include <stdio.h>

int main(){
    
    int count_chars_on_line = 0;
    for( char i = 'a' ; i <= 'z' ; i++){
        
        count_chars_on_line ++;
        printf("%c ", i);

        if (count_chars_on_line % 4 == 0){
            printf("\n");
        }
    }

    return 0;
}