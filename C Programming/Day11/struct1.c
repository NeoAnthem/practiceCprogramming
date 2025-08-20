// Example of Structure in C
#include <stdio.h>
#include <string.h>

// Custom Data type
struct student
{
    // Collection of Fields
    // structure have combinations of variable declarations
    int rollNo;
    char name[50];
    int age;
    char gender[10];
};

int main()
{
    // Variable -> dt vn
    struct student s1;
    s1.age = 50;
    s1.rollNo = 2;
    // We have to use strcpy - string copy
    strcpy(s1.name, "Pratik Mhatre");
    strcpy(s1.gender, "Male");
    struct student s2;
    // Take input
    printf("Enter your roll no: ");
    scanf("%d", &s2.rollNo);
    fflush(stdin);
    printf("Enter your full name: ");
    fgets(s2.name, 50, stdin);
    printf("Enter gender: ");
    scanf("%s", &s2.gender);
    printf("Enter age: ");
    scanf("%d", &s2.age);

    printf("---------------------------------------------\n");
    printf("Student Information\n");
    printf("Roll No = %d\n", s1.rollNo);
    printf("Name = %s\n", s1.name);
    printf("Gender = %s\n", s1.gender);
    printf("Age = %d\n", s1.age);
    printf("---------------------------------------------\n");
    printf("Student Information\n");
    printf("Roll No = %d\n", s2.rollNo);
    printf("Name = %s", s2.name);
    printf("Gender = %s\n", s2.gender);
    printf("Age = %d\n", s2.age);
    printf("---------------------------------------------\n");
}
