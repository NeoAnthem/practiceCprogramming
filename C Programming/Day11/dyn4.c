// Accept float marks in dynamic array of 5 subjects of first semester -> display marks
// then add marks of 5 subject later on of second semester -> display marks
// display average of first sem and avg of second semester at the end

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float *sem1, *sem2;
    float sum1 = 0, sum2 = 0, avg1, avg2;

    // Allocate memory dynamically for 5 subjects of first semester
    sem1 = (float*) calloc(5, sizeof(float));
    sem2 = (float*) calloc(5, sizeof(float));

    if(sem1 == NULL || sem2 == NULL)
    {
        printf("Memory allocation failed!\n");
        return 0;
    }

    // Input marks for first semester
    printf("Enter marks of 5 subjects for First Semester:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i+1);
        scanf("%f", &sem1[i]);
        sum1 += sem1[i];
    }

    // Input marks for second semester
    printf("\nEnter marks of 5 subjects for Second Semester:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i+1);
        scanf("%f", &sem2[i]);
        sum2 += sem2[i];
    }
    // Display marks of first semester
    printf("\nMarks of First Semester:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: %f\n", i+1, sem1[i]);
    }

    // Display marks of second semester
    printf("\nMarks of Second Semester:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: %f\n", i+1, sem2[i]);
    }

    // Calculate averages
    avg1 = sum1 / 5;
    avg2 = sum2 / 5;

    printf("\nAverage of First Semester = %f\n", avg1);
    printf("Average of Second Semester = %f\n", avg2);
    
    printf("\nSum of marks First Semester = %f\n", sum1);
    printf("Sum of marks Second Semester = %f\n", sum2);

    // Free allocated memory
    free(sem1);
    free(sem2);
}
