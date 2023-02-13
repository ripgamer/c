#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
#define MAX_STUDENTS 100

struct student {
    int id;
    char name[50];
    int age;
    float grade;
};

struct student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void uplodeFile();
void deleteStudent();

int main() {
    int choice;

    while (1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Uplode/append data to txt file\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
            // case 5:
            //     deleteStudent();
            //     break;
            case 6:
                uplodeFile();
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

void addStudent() {
    if (studentCount == MAX_STUDENTS) {
        printf("Error: Maximum limit of students reached.\n");
        return;
    }

    struct student newStudent;
    printf("Enter student ID: ");
    scanf("%d", &newStudent.id);
    printf("Enter student name: ");
    scanf("%s", newStudent.name);
    printf("Enter student age: ");
    scanf("%d", &newStudent.age);
    printf("Enter student grade: ");
    scanf("%f", &newStudent.grade);

    students[studentCount++] = newStudent;
    printf("Student added successfully.\n");
}

void displayStudents() {
    if (studentCount == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("ID\tName\tAge\tGrade\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%d\t%s\t%d\t%.2f\n", students[i].id, students[i].name, students[i].age, students[i].grade);
    }
}

void searchStudent() 
{
    if (studentCount == 0) {
        printf("No students to search.\n");
        return;
    }

     int id;
     printf("Enter student ID to search: ");
     scanf("%d", &id);

    for (int i = 0; i < studentCount; i++)
    {
    
        if (students[i].id == id) 
        {
            printf("ID\tName\tAge\tGrade\n");
            for (int i = 0; i < studentCount; i++) 
           {
              printf("%d\t%s\t%d\t%.2f\n", students[i].id, students[i].name, students[i].age, students[i].grade);
           }
        }
    }
}
void updateStudent() {
  int id, i;
  printf("Enter the roll number of the student to be updated: ");
  scanf("%d", &id);
  for (i = 0; i < studentCount; i++) {
    if (students[i].id == id) {
      printf("Enter the new name: ");
      scanf("%s", students[i].name);
      printf("Enter the new grade: ");
      printf("Enter student age: ");
      scanf("%d", &students[i].age);
      scanf("%f", &students[i].grade);
      printf("Student information updated successfully!\n");
      return;
    }
  }
  printf("Student with roll number %d not found!\n", id);
}
void uplodeFile() 
{
  FILE *fp;
  int i;
  fp = fopen("students.txt", "a");
  if (fp == NULL) {
    printf("Error opening file!\n");
    exit(1);
  }
  for (i = 0; i < studentCount; i++) {
    fprintf(fp, "%d %s %d %f\n", students[i].id, students[i].name, students[i].age, students[i].grade);
  }
  fclose(fp);
  printf("Data uploaded to file successfully!\n");
}

