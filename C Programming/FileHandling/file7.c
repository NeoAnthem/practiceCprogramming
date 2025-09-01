#include <stdio.h>
#include "my_header.h"
// Read 1 employee from file
int main()
{
    employee e1;
    FILE *fptr = fopen("employee-info.txt", "rb");

    fread(&e1, sizeof(employee), 1, fptr);
    printf("------------------------------------------------------\n");
    printf("Employee Info\n");
    printf("Id = %d\n", e1.empId);
    printf("Name = %s", e1.name);
    printf("Department = %s", e1.department);
    printf("Salary = %d\n", e1.salary);

    fread(&e1, sizeof(employee), 1, fptr);
    printf("------------------------------------------------------\n");
    printf("Employee Info\n");
    printf("Id = %d\n", e1.empId);
    printf("Name = %s", e1.name);
    printf("Department = %s", e1.department);
    printf("Salary = %d\n", e1.salary);
    fclose(fptr);

    // Do Not Repeat -> use loop
}