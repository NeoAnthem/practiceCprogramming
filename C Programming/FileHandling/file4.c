// WRITE IN TEXT FILE
// r+ -> read as well as write,
// w+ -> write as well as read,
// a+ -> append as well as we can read
#include <stdio.h>

int main()
{
    // append as well as read
    FILE *fptr = fopen("student.txt", "a+");

    char name[50];
    printf("Enter full name: ");
    fgets(name, 50, stdin);

    int rollNo;
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    fprintf(fptr, "Roll No = %d\n", rollNo);
    fprintf(fptr, "Name = %s", name);

    printf("Student Saved Successfully\n");

    // Now I want to read whole file
    rewind(fptr); // set pointer to start of file
    char alp;

    alp = fgetc(fptr);
    while (alp != EOF)
    {
        printf("%c", alp);
        alp = fgetc(fptr);
    }

    fclose(fptr);
}

