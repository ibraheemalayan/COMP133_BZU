#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ids[1000];
char names[1000][51];
double scores[1000];
int count;

void loadData()
{
    char fname[50];
    FILE *fin;
    char d;
    int i;
    double ts[5];

    printf("Enter the file name: ");
    scanf("%s", fname);

    fin = fopen(fname, "r");

    count = 0;

    fscanf(fin, "%d$", &ids[count]);

    while (!feof(fin))
    {
        fscanf(fin, "%[^$]", names[count]);

        fscanf(fin, "$%lf$%lf$%lf$%lf$%lf", &ts[0], &ts[1], &ts[2], &ts[3], &ts[4]);

        scores[count] = (ts[0] * 0.15 + ts[1] * 0.15 +
                              ts[2] * 0.25 + ts[3] * 0.1 + ts[4] * 0.35);

        count++;
        fscanf(fin, "%d$", &ids[count]);
    }
    fclose(fin);
}

void saveData()
{
    int i;
    char fname[50];
    FILE *fout;
    char ch[5];
    printf("Would you like to save the data? (y/n): ");
    scanf("%s", ch);
    if (ch[0] == 'y' || ch[0] == 'Y')
    {
        printf("Enter the file name: ");
        scanf("%s", fname);
        fout = fopen(fname, "w");
        fprintf(fout, "ID:\tNAME:\tFINALSCORE:\n");
        for (i = 0; i < count; i++)
        {
            fprintf(fout, "%d\t%s\t%d\n", ids[i], names[i], scores[i]);
        }
        fclose(fout);
    }
}

void displayData()
{
    int i;
    printf("ID:\tNAME:\tFINALSCORE:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t%lf\n", ids[i], names[i], scores[i]);
    }
    printf("\n");
}

void swap(int i, int j)
{
    char temp1[51];
    int temp2;

    temp2 = ids[i];
    ids[i] = ids[j];
    ids[j] = temp2;

    strcpy(temp1, names[i]);
    strcpy(names[i], names[j]);
    strcpy(names[j], temp1);

    temp2 = scores[i];
    scores[i] = scores[j];
    scores[j] = temp2;
}

void sortByID()
{
    int i, j;
    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (ids[i] > ids[j])
            {
                swap(i, j);
            }
        }
    }
}

void sortByName()
{
    int i, j;
    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                swap(i, j);
            }
        }
    }
}

void sortByScore()
{
    int i, j;
    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (scores[i] < scores[j])
            {
                swap(i, j);
            }
        }
    }
}

void searchByID()
{
    int i, id;
    printf("Enter student id: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++)
    {
        if (id == ids[i])
        {
            printf("ID:\tNAME:\tFINALSCORE\n");
            printf("%d     %s     %d\n\n", ids[i], names[i], scores[i]);
            break;
        }
    }
}

void searchByName()
{
    int i;
    char name[51];
    printf("Enter student name: ");
    scanf("%s", name);
    for (i = 0; i < count; i++)
    {
        if (strcmp(name, names[i]) == 0)
        {
            printf("ID:\tNAME:\tFINALSCORE\n");
            printf("%d     %s     %d\n\n", ids[i], names[i], scores[i]);
            break;
        }
    }
}

int main()
{
    int choice;
    loadData();
    do
    {
        printf("1) Sort and display data according to student ID\n"
               "2) Sort and display data according to student name\n"
               "3) Sort and display data according to student score\n"
               "4) Find student details according to student ID\n"
               "5) Find student details according to student name\n"
               "6) Exit the program\n"
               "Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            sortByID();
            displayData();
            saveData();
            break;
        case 2:
            sortByName();
            displayData();
            saveData();
            break;
        case 3:
            sortByScore();
            displayData();
            saveData();
            break;
        case 4:
            searchByID();
            break;
        case 5:
            searchByName();
            break;
        }
    } while (choice != 6);

    return 0;
}