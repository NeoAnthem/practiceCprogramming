// WAP to check whether a Triangle is Equilateral, Isosceles or Scalene

#include<stdio.h>

int main() {
    int s1,s2,s3;

    printf("Enter number s1 : ");
    scanf("%d",&s1);
    printf("Enter number s2 : ");
    scanf("%d",&s2);
    printf("Enter number s3 : ");
    scanf("%d",&s3);

    if (s1 > 0 && s2 > 0 && s3 > 0)
    {
        if (s1 == s2 && s2 == s3)
        {
            printf("Equilateral Triangle");
        }
        else if (s1 == s2 || s1 == s3 || s2 == s3)
        {
            printf("Isoceles Triangle");
        }
        else
        {

            printf("Scalene Triangle");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
}

