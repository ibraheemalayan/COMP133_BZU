#include <stdio.h>

int main(){
    
    int count = 0;
    for( int i = 4 ; count <= 50 ; i += 4){
        printf("%d\n", i);
        count ++;
    }

    return 0;
}