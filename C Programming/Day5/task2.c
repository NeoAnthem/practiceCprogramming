/*
WAP to accept the marks of 5 subjects and print sum and average and display grades based on average.
- if avg is between 100 to 90 -> A
- if avg is between 89 to 65 -> B
- if avg is between 64 to 55 -> C
- if avg is between 54 to 35 -> D
- if avg is below 35 -> Fail
*/

#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, sum;
    float avg;

    printf("Enter marks of subject 1: ");
    scanf("%d", &s1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &s2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &s3);

    printf("Enter marks of subject 4: ");
    scanf("%d", &s4);

    printf("Enter marks of subject 5: ");
    scanf("%d", &s5);

    if (s1 < 0 || s1 > 100 || s2 < 0 || s2 > 100 || s3 < 0 || s3 > 100 || s4 < 0 || s4 > 100 || s5 < 0 || s5 > 100)
    {
        printf("Invalid marks entered! Marks should be between 0 and 100.\n");
    }

    sum = s1 + s2 + s3 + s4 + s5;
    avg = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("Average = %f\n", avg);

    if (avg > 100 || sum > 500)
    {
        printf("Invalid marks");
    }
    else if (avg >= 90 && avg <= 100)
    {
        printf("Grade: A");
    }
    else if (avg >= 65 && avg < 90)
    {
        printf("Grade: B");
    }
    else if (avg >= 55 && avg < 65)
    {
        printf("Grade: C");
    }
    else if (avg >= 35 && avg < 55)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade: Fail");
    }
}