#include <stdio.h>
int main()
{
    int i = 10;
    do
    {
        printf("%d\n", i);
        i--;
    } while (i <= 1);

    printf("Outside of the loop\n");
}

// With WHILE
// #include <stdio.h>
// int main()
// {
//     int i = 10;
//     while (i <= 1)
//     {
//         printf("%d\n", i);
//         i--;
//     }
//     printf("Outside of the loop\n");
// }
// OUTPUT:
// Outside of the Loop