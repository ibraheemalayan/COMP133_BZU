#include <stdio.h>
#include <string.h>


double calc_score(double asg, double quz, double mid, double prl, double fnl);
void print_man();
void process_input(int in, int IDs[1000], char names[1000][50], double scores[1000], int n);
void swap(int IDs[1000], char names[1000][50], double scores[1000], int i, int k);
void asc_sort_id(int IDs[1000], char names[1000][50], double scores[1000], int n);
void print_data(int IDs[1000], char names[1000][50], double scores[1000], int n);
void ask_save_data(int IDs[1000], char names[1000][50], double scores[1000], int n);
void asc_sort_name(int IDs[1000], char names[1000][50], double scores[1000], int n);
void dsc_sort_name(int IDs[1000], char names[1000][50], double scores[1000], int n);
void get_student_by_id(int IDs[1000], char names[1000][50], double scores[1000], int n);
void get_student_by_name(int IDs[1000], char names[1000][50], double scores[1000], int n);
void print_student(int ID, char name[50], double score);


int main(){

    printf("\033[1;032mBy\n  ___ _               _                              _    _                   \n |_ _| |__  _ __ __ _| |__   ___  ___ _ __ ___      / \\  | |_   _  __ _ _ __  \n  | || '_ \\| '__/ _` | '_ \\ / _ \\/ _ \\ '_ ` _ \\    / _ \\ | | | | |/ _` | '_ \\ \n  | || |_) | | | (_| | | | |  __/  __/ | | | | |  / ___ \\| | |_| | (_| | | | |\n |___|_.__/|_|  \\__,_|_| |_|\\___|\\___|_| |_| |_| /_/   \\_\\_|\\__, |\\__,_|_| |_|\n                                                            |___/              \033[0m");
    
    printf("\nEnter data file path: \n \033[0;35m>>\033[0m \n");

    char filename[50];

    scanf("%s", filename); 

    FILE* data_f;

    if ( !( data_f = fopen(filename, "r") ) ){
        printf("\033[1;31mFile not found, Exiting program ...\033[0m\n");
        return 1;
    }

    int IDs[1000]; // Student ID
    char names[1000][50]; // full name
    double scores[1000]; // final grade (score)
    
    double asg; // Assignments grade
    double quz; // Quizzes grade
    double mid; // Midterm grade
    double prl; // Practical grade
    double fnl; // Final exam grade

    int i = 0;

    int res = fscanf(data_f, "%d$%[^$]", &IDs[i], names[i]);

    fscanf(data_f, "$%lf$%lf$%lf$%lf$%lf", &asg, &quz, &mid, &prl, &fnl);

    while ( res == 2 )
    {
        scores[i] = calc_score(asg, quz, mid, prl, fnl);

        i ++;
        
        res = fscanf(data_f, "%d$%[^$]", &IDs[i], names[i]);

        fscanf(data_f, "$%lf$%lf$%lf$%lf$%lf", &asg, &quz, &mid, &prl, &fnl);
        
    }

    int n = i;

    fclose(data_f);

    print_data(IDs, names, scores, n);


    // Interactive CLI

    int input;

    print_man();

    scanf("%d", &input);

    while ( input < 6 )
    {
       process_input(input, IDs, names, scores, n);

       print_man();

       scanf("%d", &input);
    }
    
    printf("\n\033[1;31mExiting program ...\033[0m\n");

    return 0;
}

double calc_score(double asg, double quz, double mid, double prl, double fnl){

    return ( asg * 0.15 + quz * 0.15 + mid * 0.25 + prl * 0.10 + fnl * 0.35  );

}

void print_man(){
    printf("\nChoose a function from the following by entering its number :\n\n\033[1;33m\t1)\033[0m Sort data in ascending order according to students' IDs and then display it.\n\033[1;33m\t2)\033[0m Sort data in ascending order according to students' names and then display it.\n\033[1;33m\t3)\033[0m Sort data in descending order according to students' scores and then display it.\n\033[1;33m\t4)\033[0m enter a certain student ID to display his score\n\033[1;33m\t5)\033[0m enter a certain student name to display his score\n\033[1;33m\t6)\033[0m Exit the program\n\n \033[0;35m>>\033[0m ");
}

void process_input(int in, int IDs[1000], char names[1000][50], double scores[1000], int n){
    switch (in)
    {
    case 1:
        asc_sort_id(IDs, names, scores, n);
        break;
    case 2:
        asc_sort_name(IDs, names, scores, n);
        break;
    case 3:
        dsc_sort_name(IDs, names, scores, n);
        break;
    case 4:
        get_student_by_id(IDs, names, scores, n);
        break;
    case 5:
        get_student_by_name(IDs, names, scores, n);
        break;
    
    default:
        printf("\n\033[1;31minvalid input\033[0m\n");
        break;
    }
}

void swap(int IDs[1000], char names[1000][50], double scores[1000], int i, int k){

    char temp_name[50];

    int temp_id = IDs[i];
    double temp_score = scores[i];

    strcpy(temp_name, names[i]);

    IDs[i] = IDs[k];
    scores[i] = scores[k];

    strcpy(names[i], names[k]);

    IDs[k] = temp_id;
    scores[k] = temp_score;

    strcpy(names[k], temp_name);

}

// 1
void asc_sort_id(int IDs[1000], char names[1000][50], double scores[1000], int n){

    printf("Sorted data (ascending by ID) : \n--------------------------------\n");

    for(int i = 0 ; i < n-1 ; i ++){
        for(int k = 0; k < n-i-1 ; k ++){
            if(IDs[k] > IDs[k+1]){
                swap(IDs, names, scores, k, k+1);
            }
        }
    }

    print_data(IDs, names, scores, n);

    ask_save_data(IDs, names, scores, n);

}

// 2
void asc_sort_name(int IDs[1000], char names[1000][50], double scores[1000], int n){

    printf("Sorted data (ascending by Name) : \n--------------------------------\n");

    for(int i = 0 ; i < n-1 ; i ++){
        for(int k = 0; k < n-i-1 ; k ++){
            if( strcmp(names[k] ,names[k+1]) == 1 ){
                swap(IDs, names, scores, k, k+1);
            }
        }
    }

    print_data(IDs, names, scores, n);

    ask_save_data(IDs, names, scores, n);

}

// 3
void dsc_sort_name(int IDs[1000], char names[1000][50], double scores[1000], int n){

    printf("Sorted data (descending by Score) : \n--------------------------------\n");

    for(int i = 0 ; i < n-1 ; i ++){
        for(int k = 0; k < n-i-1 ; k ++){
            if( scores[k] < scores[k+1] ){
                swap(IDs, names, scores, k, k+1);
            }
        }
    }

    print_data(IDs, names, scores, n);

    ask_save_data(IDs, names, scores, n);

}

// 4
void get_student_by_id(int IDs[1000], char names[1000][50], double scores[1000], int n){

    printf("Enter Student ID:\n \033[0;35m>>\033[0m ");
    
    int ID;
    scanf("%d", &ID);

    for(int i = 0 ; i < n ; i ++){
        if(IDs[i] == ID){
            print_student(IDs[i], names[i], scores[i]);
            return;
        }
    }

    printf("\033[1;31mThe Given Student ID was not found !\033[0m\n");

}

// 5
void get_student_by_name(int IDs[1000], char names[1000][50], double scores[1000], int n){

    printf("Enter Student Name:\n \033[0;35m>>\033[0m \n");

    char t;
    scanf("%c", &t);
    
    char name[50];
    scanf("%[^\n]", name);

    for(int i = 0 ; i < n ; i ++){
        if( strcmp(names[i], name) == 0 ){
            print_student(IDs[i], names[i], scores[i]);
            return;
        }
    }

    printf("\033[1;31mThe Given Student Name was not found !\033[0m\n");

}

void print_data(int IDs[1000], char names[1000][50], double scores[1000], int n){

    char white[50];

    printf("\033[1;32m\n ID\t\tName %46sScore\n\033[0m", white);
    printf(" --\t\t---- %46s-----\n", white);

    for(int i = 0 ; i < n ; i ++){
        printf(" \033[1;36m%d\033[1;37m\t%-50s %lf\n\033[0m", IDs[i], names[i], scores[i]);
    }
}

void print_student(int ID, char name[50], double score){

    char white[50];

    printf("\033[1;32m\n ID\t\tName %46sScore\n\033[0m", white);
    printf(" --\t\t---- %46s-----\n", white);
    printf(" \033[1;36m%d\033[1;37m\t%-50s %lf\n\033[0m", ID, name, score);

}

void ask_save_data(int IDs[1000], char names[1000][50], double scores[1000], int n){

    printf("\nDo you want to save the results:\n\033[1;33m\t1)\033[0m Yes\n\033[1;33m\t2)\033[0m No\n \t\033[0;35m>>\033[0m ");

    int a;
    scanf("%d", &a);

    if(a != 1 ){
        return;
    }

    printf("Enter the output file path: ");

    char filename[50];

    scanf("%s", filename);

    FILE* out_data_f = fopen(filename, "w");

    char white[50];

    for(int i = 0 ; i < n ; i ++){
        fprintf(out_data_f, " %d\t\t\t%-50s %lf\n", IDs[i], names[i], scores[i]);
    }

    fclose(out_data_f);    

}


// Author : Ibraheem Alyan 
// Student ID : 1201180
// https://www.ibraheemalyan.dev