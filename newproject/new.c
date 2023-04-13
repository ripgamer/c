#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct student
{
    int id;
    char name[50];
    int age;
    float cgpa;
};

// created students array of datatype student
struct student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void saveDataToFile();
void showDataFromFile();

int main()
{
    int choice;
    while (1)
    {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Show Student Data\n");
        printf("6. Uplode/append data to txt file\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateStudent();
            break;
        case 5:
            showDataFromFile();
            break;
        case 6:
            saveDataToFile();
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    }
    return 0;
}

void addStudent()
{
    if (studentCount == MAX_STUDENTS)
    {
        printf("Error: Maximum limit of students reached.\n");
        return;
    }

    struct student newStudent;
    printf("Enter student ID: ");
    scanf("%d", &newStudent.id);
    printf("Enter student name: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    scanf("%[^\n]s", newStudent.name);

    printf("Enter student age: ");
    scanf("%d", &newStudent.age);
    printf("Enter student cgpa: ");
    scanf("%f", &newStudent.cgpa);

    // adding input data to students array
    students[studentCount++] = newStudent;
    printf("Student added successfully.\n");
}

// Display data from students array
void displayStudents()
{
    if (studentCount == 0)
    {
        printf("No students to display.\n");
        return;
    }

    printf("ID\tName\t\t\tAge\tGrade\n");
    for (int i = 0; i < studentCount; i++)
    {
        printf("%d\t%s\t\t%d\t%.2f\n", students[i].id, students[i].name, students[i].age, students[i].cgpa);
    }
}

// search student data in students array
void searchStudent()
{
    int id;
    printf("Enter student ID to search: ");
    scanf("%d", &id);
    if (studentCount == 0)
    {
        printf("No students to search.\n");
        return;
    }

    for (int i = 0; i < studentCount; i++)
    {

        if (students[i].id == id)
        {
            printf("ID\tName\tAge\tGrade\n");
            printf("%d\t%s\t%d\t%.2f\n", students[i].id, students[i].name, students[i].age, students[i].cgpa);
        }
    }
}
void updateStudent()
{
    int id, i;
    printf("Enter the id of the student to updated: ");
    scanf("%d", &id);
    for (i = 0; i < studentCount; i++)
    {
        if (students[i].id == id)
        {
            printf("Enter the new name: ");
            scanf("%s", students[i].name);
            printf("Enter the new cgpa: ");
            printf("Enter student age: ");
            scanf("%d", &students[i].age);
            scanf("%f", &students[i].cgpa);
            printf("Student information updated successfully!\n");
        }
    }
    printf("Student with roll number %d not found!\n", id);
}

void saveDataToFile()
{
    FILE *fp;
    int i;
    fp = fopen("students.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    for (i = 0; i < studentCount; i++)
    {
        fprintf(fp, "%d\t %s\t %d\t %f\n", students[i].id, students[i].name, students[i].age, students[i].cgpa);
    }
    fclose(fp);
    printf("Data uploaded to file successfully!\n");
}

void showDataFromFile()
{
    FILE *fp;
    // created buffer character array for printing information of student from file
    char buffer[MAX_STUDENTS];

    fp = fopen("students.txt", "r");

    // if file don't exits
    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
    }

    printf("File opened successfully.\n\n");
    printf("ID\tName\t\tAge\tGrade\n");
    printf("\n");
    // while information is present in file print the information
    while (fgets(buffer, MAX_STUDENTS, fp) != NULL)
    {
        printf("%s", buffer);
    }
    printf("\n");
    fclose(fp);
}
