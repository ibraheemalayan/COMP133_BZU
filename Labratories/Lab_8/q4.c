#include <stdio.h>
#include <string.h>

void reverse(char[][30], int);

int main(){
    
    int n;

    printf("Enter sentence length:");

    scanf("%d", &n);

    char some_char;

    scanf("%c", &some_char);
    
    char sentence[n];

   printf("Enter sentence with length %d : ", n);

   gets(sentence);    

    int words = 1;
    char mat[words][30];
    
    char * token = strtok(sentence, " ");
    strcpy(mat[0], token);
    int i = 0;
    while( token != NULL ) {

        strcpy(mat[i], token);
        i ++;
        token = strtok(NULL, " ");
    }

    words = i;

    reverse(mat, words);
    
    return 0;
}



void reverse(char sentence[][30], int n)
{    
     for (int i = n-1 ; i >= 0 ; i--){
        printf("%s ", sentence[i]);
    }
    
       
}