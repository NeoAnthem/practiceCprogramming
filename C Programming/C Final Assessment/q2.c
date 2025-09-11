// Q2. String Vowels & Consonants (3 Marks)
// Problem: Write a C program to input a string and count vowels and consonants.
// Sample Input/Output:
// Input: Hello World
// Output: Vowels = 3, Consonants = 7

#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i;
    int vowelCount = 0, consonantCount = 0;
    printf("Enter the string : ");
    gets(str);
    
    int length = strlen(str);

    printf("String is : %s\n", str);
    for (i = 0; str[i]!= '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o'|| str[i] == 'O'|| str[i] == 'u' || str[i] == 'U')
        {
            vowelCount++;
        }
        else
        {
            consonantCount++;
        }
    }
    printf("\n");
    printf("The total count of Vowels is : %d\n", vowelCount);
    printf("The total count of Consonants is : %d\n", consonantCount);
}