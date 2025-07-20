
// WAP to check whether the character is vowel or consonant
// vowel -> a,e,i,o,u
// input -. char -> 1

#include<stdio.h>

int main() {
    char alp;
    printf("Enter an alphabet : ");
    scanf("%c",&alp);

    if (alp == 'a' ||alp == 'e' ||alp == 'i' ||alp == 'o' ||alp == 'u' ||alp == 'A' ||alp == 'E' ||alp == 'I' ||alp == 'O' ||alp == 'U') {
        printf("It is a Vowel");
    } else {
        printf("Its a Consonant");
    }
}
