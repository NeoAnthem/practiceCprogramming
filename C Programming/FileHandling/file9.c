#include <stdio.h>
#include "my_header.h"
// Save 1 employee in file
int main()
{
    FILE *fptr = fopen("employee-info.txt", "rb");
    employee e1;
    // READ USING LOOP
    while (fread(&e1, sizeof(employee), 1, fptr) > 0)
    {
        printf("------------------------------------------------------\n");
        printf("Employee Info\n");
        printf("Id = %d\n", e1.empId);
        printf("Name = %s", e1.name);
        printf("Department = %s", e1.department);
        printf("Salary = %d\n", e1.salary);
    }
}