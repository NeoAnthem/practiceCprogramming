// WAP to add 2 numbers -> perform this 3 times
#include <stdio.h>

// without return type - void, without parameters (empty)
// function definition {}
void addition()
{
    int n1, n2;
    int result;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &n1, &n2);

    result = n1 + n2;

    printf("Addition of %d, %d = %d\n", n1, n2, result);
}

int main()
{
    // Fn call
    addition();

    addition();
    addition();
}