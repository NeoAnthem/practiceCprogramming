// Q3. Sum of Array Elements (5 Marks)
// Problem: Write a C program to input 10 numbers in an array and find their odd
// sum and even sum.
// Sample I/O:
// Input: 1 2 3 4 5 6 7 8 9 10
// Output: 
// odd sum = 25
// even sum = 30

#include<stdio.h>
int main(){
    int arr[10];
    int oddSum = 0, evenSum = 0;
    int i,n;

    printf("Enter the values in the array : \n");
    for ( i = 0; i < 10; i++)
    {
        printf("Enter the value at index [%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
        if (arr[i] % 2 == 0)
        {
            evenSum = evenSum + arr[i];
        }else {
            oddSum = oddSum + arr[i];
        }
    }
    printf("\n");
    printf("Sum of even numbers in the array is : %d\n", evenSum);
    printf("Sum of odd numbers in the array is : %d\n", oddSum);
    printf("\n");
}
