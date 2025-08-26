/*
Create a structure of employee with name, emp_id, salary, department
save 3 structure in file names as employee.txt
read all the value
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure
struct Employee {
    char name[50];
    int emp_id;
    float salary;
    char department[30];
};

// Function to remove trailing newline from fgets
void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    struct Employee emp[3];   // Array of 3 employees
    FILE *fptr;
    int i;

    // Open file in write mode
    fptr = fopen("employee.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
    }

    // Input employee details
    printf("Enter details of 3 employees:\n");
    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d :\n", i + 1);

        printf("Name : ");
        fflush(stdin); // clear input buffer
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        remove_newline(emp[i].name);

        printf("Employee ID : ");
        scanf("%d", &emp[i].emp_id);

        printf("Salary : ");
        scanf("%f", &emp[i].salary);
        getchar(); // consume leftover newline

        printf("Department : ");
        fgets(emp[i].department, sizeof(emp[i].department), stdin);
        remove_newline(emp[i].department);

        // Write employee data into file
        fprintf(fptr, "%s %d %.2f %s\n", emp[i].name, emp[i].emp_id, emp[i].salary, emp[i].department);
    }

    fclose(fptr);  // Close file after writing
    printf("\nData saved successfully in employee.txt\n");

    // Reading from file
    fptr = fopen("employee.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
    }

    printf("\nReading Employee Data from File:\n");
    while (fscanf(fptr, "%s %d %f %s", emp[0].name, &emp[0].emp_id, &emp[0].salary, emp[0].department) != EOF) {
        printf("Name: %s | ID: %d | Salary: %f | Department: %s\n",emp[0].name, emp[0].emp_id, emp[0].salary, emp[0].department);
    }

    fclose(fptr);  // Close file after reading
}
