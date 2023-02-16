#include <stdio.h>       //stander input output lib
#include <stdlib.h>      //stander liberary used to handel memory allocation etc.
#include <string.h>      //stander string lib
#define MAX_STUDENTS 100 //defined constant 


struct student 
{
    int id;
    char name[50];
    int age;
    float cgpa;
    int attendance;
};

// created students array of datatype student
struct student students[MAX_STUDENTS];
int studentCount = 0;

//declaring diffrent fuctions to do work
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void downloadFile();
void uplodeFile();
void deleteStudent();

int main() 
{
    int choice;
    //code for menu start here 
    while (1) 
    {
        printf("\n=============================\n");
        printf("\n= Student Management System =\n");
        printf("\n=============================\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Uplode/append data to txt file\n");
        printf("7. Downlode/read data from txt file\n");
        printf("0. Exit\n");
        printf("\n=============================\n");
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
                  deleteStudent();
                  break;
            case 6:
                uplodeFile();
                 break;
            case 7:
                downloadFile();
            case 0:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    }
    //code for menue ends here
    return 0;
}

// adding input data to students array
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
    scanf("%s", newStudent.name);
    printf("Enter student age: ");
    scanf("%d", &newStudent.age);
    printf("Enter student cgpa: ");
    scanf("%f", &newStudent.cgpa);
    printf("Enter student attendance\n(1=P/0=A): ");
    scanf("%d",&newStudent.attendance);
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

    printf("ID\tName\tAge\tCgpa\tAttendance\n");
    for (int i = 0; i < studentCount; i++) 
    {
        printf("%d\t%s\t%d\t%.2f\t%d\n", students[i].id, students[i].name, students[i].age, students[i].cgpa,students[i].attendance);
    }
}

// search student data in students array
void searchStudent() 
{
    if (studentCount == 0) 
    {
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
            printf("ID\tName\tAge\tCgpa\tAttendance\n");
            printf("%d\t%s\t%d\t%.2f\t%d\n", students[i].id, students[i].name, students[i].age, students[i].cgpa,students[i].attendance);
        
        }
    }
}

//update stdent data 
void updateStudent() 
{
  int id, i;
  printf("Enter the roll number of the student to be updated: ");
  scanf("%d", &id);
  for (i = 0; i < studentCount; i++) 
  {
    if (students[i].id == id) 
    {
      printf("Enter the new name: ");
      scanf("%s", students[i].name);
      printf("Enter the new cgpa: ");
      scanf("%f", &students[i].cgpa);
      printf("Enter student age: ");
      scanf("%d", &students[i].age);
      printf("Enter student attendance\n(1=P/0=A): ");
      scanf("%d", &students[i].attendance);
      printf("Student information updated successfully!\n");
      return;
    }
  }
  printf("Student with roll number %d not found!\n", id);
}

//function to save stucture data to txt file
void uplodeFile() 
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
    fprintf(fp, "%d %s %d %f %d\n", students[i].id, students[i].name, students[i].age, students[i].cgpa,students[i].attendance);
  }
  fclose(fp);
  printf("Data uploaded to file successfully!\n");
}

//function to fetch data from txt file to structure 
void downloadFile() 
{
  FILE *fp;
  int i = 0;
  fp = fopen("students.txt", "r");
  if (fp == NULL) 
  {
    printf("Error opening file!\n");
    exit(1);
  }
  while (fscanf(fp, "%d %s %d %f %d\n", &students[i].id, students[i].name, &students[i].age, &students[i].cgpa,&students[i].attendance) != EOF) {
    i++;
  }
  studentCount = i;
  fclose(fp);
  printf("Data downloaded from file successfully!\n");
  main();
}

//function to delete data from strucure
void deleteStudent() 
{
  int i, j,id;
  printf("\nEnter student id to delet:");
  scanf("%d",&id);
  for (i = 0; i < studentCount; i++) 
  {
    if (students[i].id == id) 
    {
      for (j = i; j < studentCount - 1; j++) 
      {
        students[j] = students[j + 1];
      }
      (studentCount)--;
      printf("Student with roll number %d deleted successfully!\n", id);
      return;
    }
  }
  printf("Student with roll number %d not found!\n", id);
}
