#include <stdio.h>
#include "my_header.h"
// Save 1 employee in file
int main()
{
    employee e1;

    printf("Enter employee id: ");
    scanf("%d", &e1.empId);
    fflush(stdin);
    printf("Enter name: ");
    fgets(e1.name, 100, stdin);
    printf("Enter department: ");
    fgets(e1.department, 100, stdin);
    printf("Enter salary: ");
    scanf("%d", &e1.salary);

    FILE *fptr = fopen("employee-info.txt", "ab");

    fwrite(&e1, sizeof(employee), 1, fptr);

    fclose(fptr);
    printf("File saved successfully");
}
