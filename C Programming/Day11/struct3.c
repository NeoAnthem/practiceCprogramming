/*
Create structure of employee with :
empId, name, salary, department
create 3 employee take all input then display all 3 emps
(with loop)
*/
#include <stdio.h>
#include <string.h>

struct employee
{
    int empId;
    char name[50];
    int salary;
    char department[20];
};

int main()
{
    struct employee e[3]; // array of 3 employees
    int i;

    // Input using loop
    for (i = 0; i < 3; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Enter Emp Id : ");
        scanf("%d", &e[i].empId);

        fflush(stdin); // clear input buffer
        printf("Enter Full Name : ");
        fgets(e[i].name, sizeof(e[i].name), stdin);

        printf("Enter Salary : ");
        scanf("%d", &e[i].salary);

        printf("Enter Department : ");
        scanf("%s", e[i].department);

        printf("---------------------------------------------\n");
    }

    // Display using loop
    printf("\n=========== Employee Information ===========\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Emp ID = %d\n", e[i].empId);
        printf("Name = %s", e[i].name); // fgets keeps newline, so no \n needed
        printf("Salary = %d\n", e[i].salary);
        printf("Department = %s\n", e[i].department);
        printf("---------------------------------------------\n");
    }
}
