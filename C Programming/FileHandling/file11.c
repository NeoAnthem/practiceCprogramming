// Delet emp by id
#include <stdio.h>
#include "my_header.h"
int main()
{
    char fileName[] = "employee-info.txt";
    FILE *fptr = fopen(fileName, "rb");
    employee e1;
    while (fread(&e1, sizeof(employee), 1, fptr) > 0)
    {
        printf("------------------------------------------------------\n");
        printf("Employee Info\n");
        printf("Id = %d\n", e1.empId);
        printf("Name = %s", e1.name);
        printf("Department = %s", e1.department);
        printf("Salary = %d\n", e1.salary);
    }

    int empId;
    printf("Enter employee id to be deleted: ");
    scanf("%d", &empId);
    rewind(fptr);
    FILE *tempFile = fopen("temp.txt", "wb");
    while (fread(&e1, sizeof(employee), 1, fptr) > 0)
    {
        if (e1.empId != empId)
        {
            // copying all employee except that matches empId
            fwrite(&e1, sizeof(employee), 1, tempFile);
        }
    }
    fclose(fptr);
    fclose(tempFile);
    remove(fileName);
    rename("temp.txt", fileName);

    // display employees after deletion
    printf("Employee deleted successfully\n\n");
    fptr = fopen(fileName, "rb");
    while (fread(&e1, sizeof(employee), 1, fptr) > 0)
    {
        printf("------------------------------------------------------\n");
        printf("Employee Info\n");
        printf("Id = %d\n", e1.empId);
        printf("Name = %s", e1.name);
        printf("Department = %s", e1.department);
        printf("Salary = %d\n", e1.salary);
    }
    fclose(fptr);
}