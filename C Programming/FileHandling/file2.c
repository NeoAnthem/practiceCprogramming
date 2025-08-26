// WRITE IN TEXT FILE
// r -> read, w -> write, a -> append
#include <stdio.h>

int main()
{
    FILE *fptr = fopen("student.txt", "a");

    char name[50];
    printf("Enter full name: ");
    fgets(name, 50, stdin);

    int rollNo;
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    fprintf(fptr, "Roll No = %d\n", rollNo);
    fprintf(fptr, "Name = %s", name);

    printf("Student Saved Successfully");

    fclose(fptr);
}