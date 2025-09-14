// Q5. Square Pattern (7 Marks)
// Problem: Print the following pattern for n=4 .
// Sample Output:
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int l = 2 * n - 1;
    
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            int dr = abs((i - n)); 
            int dc = abs((j - n));
            int max = dr > dc ? dr : dc;
            printf("%d ", max + 1);
        }
        printf("\n");
    }
}
