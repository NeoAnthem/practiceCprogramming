// Update Employee
// Read All emp -> empid -> search -> emp -> update
#include <stdio.h>
#include "my_header.h"
// Save 1 employee in file
int main()
{
    FILE *fptr = fopen("employee-info.txt", "rb+");
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

    rewind(fptr);
    printf("Enter emp id to be updated: ");
    int empId;
    scanf("%d", &empId); // search

    fflush(stdin);
    int found = 0; // not found
    while (fread(&e1, sizeof(employee), 1, fptr) > 0)
    {
        if (e1.empId == empId)
        {
            // if found then update the employee
            found = 1;
            // delete old obj
            fseek(fptr, -sizeof(employee), SEEK_CUR);
            printf("Enter updated name: ");
            fgets(e1.name, 100, stdin);
            printf("Enter updated department: ");
            fgets(e1.department, 100, stdin);
            printf("Enter updated salary: ");
            scanf("%d", &e1.salary);
            fwrite(&e1, sizeof(employee), 1, fptr);
            break;
        }
    }
    if (found == 0)
    {
        printf("Employee with empId = %d not found\n", empId);
    }
    else
    {
        printf("Employee with empId = %d updated successfully\n", empId);
        rewind(fptr);
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
    fclose(fptr);
}

// Delete emp By Id