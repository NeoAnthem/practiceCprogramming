/*
Create structure of employee with :
empId, name, salary, department
create 3 employee take all input then display all 3 emps
(without loop)
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
    struct employee e1;
    printf("Enter your empId : ");
    scanf("%d", &e1.empId);
    fflush(stdin);
    printf("Enter your full name : ");
    fgets(e1.name, 50, stdin);
    printf("Enter salary : ");
    scanf("%d", &e1.salary);
    printf("Enter department : ");
    scanf("%s", &e1.department);
    printf("---------------------------------------------\n");

    struct employee e2;
    printf("Enter your empId : ");
    scanf("%d", &e2.empId);
    fflush(stdin);
    printf("Enter your full name : ");
    fgets(e2.name, 50, stdin);
    printf("Enter salary : ");
    scanf("%d", &e2.salary);
    printf("Enter department : ");
    scanf("%s", &e2.department);
    printf("---------------------------------------------\n");

    struct employee e3;
    printf("Enter your empId : ");
    scanf("%d", &e3.empId);
    fflush(stdin);
    printf("Enter your full name : ");
    fgets(e3.name, 50, stdin);
    printf("Enter salary : ");
    scanf("%d", &e3.salary);
    printf("Enter department : ");
    scanf("%s", &e3.department);

    printf("---------------------------------------------\n");
    printf("Employee Information : \n\n");
    printf("Emp ID = %d\n", e1.empId);
    printf("Name = %s", e1.name);
    printf("Salary = %d\n", e1.salary);
    printf("Department = %s\n", e1.department);
    printf("---------------------------------------------\n");
    printf("---------------------------------------------\n");
    printf("Employee Information : \n\n");
    printf("Emp ID = %d\n", e2.empId);
    printf("Name = %s", e2.name);
    printf("Salary = %d\n", e2.salary);
    printf("Department = %s\n", e2.department);
    printf("---------------------------------------------\n");
    printf("---------------------------------------------\n");
    printf("Employee Information : \n\n");
    printf("Emp ID = %d\n", e3.empId);
    printf("Name = %s", e3.name);
    printf("Salary = %d\n", e3.salary);
    printf("Department = %s\n", e3.department);
    printf("---------------------------------------------\n");
}