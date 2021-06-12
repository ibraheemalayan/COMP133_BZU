#include <stdio.h>

struct book 
{
    char title[50];
    char author[50];
    int edition;
    int year;
    float price;
};

struct library
{
    struct book books[2];
};

struct book get_book(){

    struct book bk;

    printf("Enter book details: ");

    printf("title: ");
    scanf("%s", bk.title);

    printf("author's name: ");
    scanf("%s", bk.author);

    printf("edition: ");
    scanf("%d", &bk.edition);

    printf("year: ");
    scanf("%d", &bk.year);

    printf("price: ");
    scanf("%f", &bk.price);

    return bk;
}

void print_book(struct book bk){
    printf("Book : { title: %s, author: %s, edition: %d, year: %d, price: %.2f }\n", bk.title, bk.author, bk.edition, bk.year, bk.price);
}

void print_lib(struct library lb){
    printf("Library : {\n");

    for( int i = 0 ; i < 2 ; i ++){
        print_book(lb.books[i]);
    }

     printf("}\n");
}

int main(){
    
    struct library lib;

    lib.books[0] = get_book();
    lib.books[1] = get_book();

    print_lib(lib);


    

    return 0;
}