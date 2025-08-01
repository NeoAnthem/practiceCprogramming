// Assignment 1

#include <stdio.h>
int main()
{
    int totalDueAmt;
    int numOfMonths;

    int instNum, instAmt, remBal;

    printf("Enter Total Due Amt : ");
    scanf("%d", &totalDueAmt);
    printf("Enter No. of Months : ");
    scanf("%d", &numOfMonths);

    instNum = 1;

    printf("Installment Number\t\t");
    printf("Installment Amountr\t\t");
    printf("Remaining Balance\t\t");
    printf("\n");

    instAmt = totalDueAmt / numOfMonths;

    for (instNum = 1; instNum <= numOfMonths; instNum++)
    {
        printf("%d\t\t\t\t\t%d\t\t\t\t\t%d\n", instNum, instAmt, remBal);

        totalDueAmt -= instAmt;
        remBal = totalDueAmt - instAmt;
    }
}