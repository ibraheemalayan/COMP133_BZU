#include <stdio.h>
#include <string.h>

// typedef enum{
//     today,
//     to
// }w;


int main(){

    char c[100]="a.txt";
    FILE* f = fopen(c, "r");
    f=fopen(c, "r");

    fscanf(f,"%s",c);

    printf("%s",c);

    // double sc = 85*.15;

    // char * a1 ;

    // gets(a1);
    
    // printf("test %s", a1);

    //  while(today > to){
    //     printf("test");
    // }

}