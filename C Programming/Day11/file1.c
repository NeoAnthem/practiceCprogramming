// Open file with C program
#include <stdio.h>
int main()
{
    FILE *fptr = fopen("demo.txt", "r");
    if (fptr == NULL)
    {
        printf("File Not Found");
    }
    else
    {
        printf("File Opened Successfully");
        fclose(fptr);
    }
}