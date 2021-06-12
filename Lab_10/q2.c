#include <stdio.h>

struct student 
{
    char name[50];
    int seat_num;
    float marks[10];
    float percentages[10];
    float grades[10];
};

struct class
{
    struct student students[50];
};


struct student get_student(){

    struct student st;

    printf("Enter Student details: ");

    printf("name: ");
    scanf("%s", st.name);

    printf("seat num: ");
    scanf("%d", &st.seat_num);

    return st;
}

void print_student(struct student st){
    printf("Book : { name: %s, seat_num: %d }\n", st.name, st.seat_num );
}

void print_class(struct class c){
    printf("Class : {\n");

    for( int i = 0 ; i < 2 ; i ++){
        print_student(c.students[i]);
    }

     printf("}\n");
}

int main(){
    
    struct class c;

    c.students[0] = get_student();
    c.students[1] = get_student();

    print_class(c);

    return 0;
}