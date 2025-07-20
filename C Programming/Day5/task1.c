// WAP to check whether the year is a leap year or not

#include <stdio.h>
int main()
{
    int year;

    printf("Enter the Year : ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf(" %d is a Leap Year", year);
    }
    else
    {
        printf(" %d is not a Leap Year", year);
    }
}