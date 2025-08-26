// READ DATA OF STUDENT
#include <stdio.h>
int main()
{
    FILE *fptr = fopen("student.txt", "r");
    char alp;

    alp = fgetc(fptr);
    while (alp != EOF)
    {
        printf("%c", alp);
        alp = fgetc(fptr);
    }
}