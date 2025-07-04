// WAP to check vowel or consonant
// a e i o u
#include <stdio.h>

int main()
{
    char alp;
    printf("Enter a character: ");
    scanf("%c", &alp);

    switch (alp)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
    }
}