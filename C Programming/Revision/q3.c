/*
WAP to accept the marks of 5 subjects and print sum and percentage and display grades based on percentage.
- if per is between 100 to 85 -> A
- if per is between 84 to 70 -> B
- if per is between 69 to 55 -> C
- if per is between 54 to 35 -> D
- if per is below 35 -> Fail
*/

#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, sum;
    float per = sum / 5;

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
    per = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("Percentage = %f\n", per);

    if (avg > 100 || sum > 500)
    {
        printf("Invalid marks");
    }
    else if (per >= 85 && per <= 100)
    {
        printf("Grade: A");
    }
    else if (per >= 70 && per < 84)
    {
        printf("Grade: B");
    }
    else if (per >= 55 && per < 69)
    {
        printf("Grade: C");
    }
    else if (per >= 35 && per < 55)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade: Fail");
    }
}