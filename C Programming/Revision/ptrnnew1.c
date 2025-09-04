#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n");
    int size = 2 * n - 1; // total rows/columns
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // find the minimum distance from any edge
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            int min = top;
            if (left < min) min = left;
            if (right < min) min = right;
            if (bottom < min) min = bottom;

            // print value
            printf("%d ", n - min);
        }
        printf("\n");
    }
}

