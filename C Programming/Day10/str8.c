/*
1. WAP to accept full name of student, branch = (IT engineering,Mech engin )
then marks of 5 subject
    display name and marks and total marks and average
 */

#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter Full Name: ");
    fgets(name, 50, stdin);
    fflush(stdin);
    char branch[50];
    printf("Enter Specialization: ");
    fgets(branch, 50, stdin);
    fflush(stdin);
    int marks[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Name =  %s", name);
    printf("Specialization =  %s", branch);
    // Marks -> array -> loop
    printf("Marks are: \n");
    float sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
        printf("%d\t", marks[i]);
    }
    printf("\nTotal Marks =  %.2f\n", sum);
    printf("Average Marks =  %.2f\n", sum / 5);
}
