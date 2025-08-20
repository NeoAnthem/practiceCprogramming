#include <stdio.h>
#include <string.h>

// User Defined Data Type -> We can name also
typedef struct student_structure
{
    // Collection of Fields
    // structure have combinations of variable declarations
    int rollNo;
    char name[50];
    int age;
    char gender[10];
} student;

// Array of structure

int main()
{
    // dt arr_name[size]
    // Store data of 3 students

    // struct student_structure students[3];

    student students[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter student %d information:\n", i + 1);
        printf("Enter roll no: ");
        scanf("%d", &students[i].rollNo);
        fflush(stdin);
        printf("Enter name: ");
        fgets(students[i].name, 50, stdin);
        printf("Enter Gender: ");
        scanf("%s", &students[i].gender);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
    }

    // Display
    for (int i = 0; i < 3; i++)
    {
        printf("---------------------------------------------\n");
        printf("Student Information\n");
        printf("Roll No = %d\n", students[i].rollNo);
        printf("Name = %s", students[i].name);
        printf("Gender = %s\n", students[i].gender);
        printf("Age = %d\n", students[i].age);
    }
}