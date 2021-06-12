#include <stdio.h>

int main(){
    
    // Just some non divisable initial values
    int a = 3;
    int b = 2;

    while ( a%b != 0 )
    {
        printf("Enter the fisrt number of the pair:");
        scanf("%d", &a);
        printf("Enter the second number of the pair:");
        scanf("%d", &b);
    }
    

    return 0;
}