// WAP to print table of 5

#include<stdio.h>

int main() {
    int table;
    int i = 1;

    while (i<=10)
    {
        table = 5 *i;
        printf("5 * %d = %d \n",i,table);
        i++;
    }
}

