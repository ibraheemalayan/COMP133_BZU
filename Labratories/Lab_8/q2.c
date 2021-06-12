#include <stdio.h>
#include <string.h>

void swap_chars(char[30], char[30]);
void sort(char[5][30]);

int main(){
    
    char input[5][30];

    printf("Enter 5 names: \n\n");

    for (int i = 0 ; i < 5 ; i ++ ){
        scanf("%s", input[i]);
    }

    sort(input);
    
    printf("\nSorted names:\n\n");
    for (int i = 0 ; i < 5 ; i ++ ){
        printf("%s\n", input[i]);
    }
    
    return 0;
}


void swap_strings(char a[30], char b[30])
{
    char temp[30];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sort(char arr[5][30])
{
   for (int i = 0; i < 5; i++){
       for (int j = 0; j < 5; j++){

           if ( strcmp(arr[i], arr[j]) <= 0 ){

               swap_strings(arr[i], arr[j]);

           }

       }
   }
       
}