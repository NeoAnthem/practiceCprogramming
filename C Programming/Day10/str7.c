/*
1. WAP to accept full name of student, branch = (IT engineering,Mech engin ) then marks of 5 subject
    display name and marks and total marks and average
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char name[30], branch[30];
    int marks[5], total = 0;
    float avg;
    int i;

    printf("\n");
    printf("Enter full name of student : ");
    gets(name);

    printf("Enter branch : ");
    gets(branch);

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d : ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    avg = total / 5.0;

    printf("\n");
    printf("The full name of student is : %s\n", name);
    printf("The branch name is : %s\n", branch);
    printf("Marks : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }
    printf("\nTotal marks : %d\n", total);
    printf("Average is : %f\n", avg);
}