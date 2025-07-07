/*
IF Else Question

Electricity Bill Calculator

Input number of units consumed.
Billing rate:

First 50 units: ₹0.50/unit

Next 100 units: ₹0.75/unit

Next 100 units: ₹1.20/unit

Above 250 units: ₹1.50/unit

Add 20% surcharge on total bill.

Print final amount.
*/

#include <stdio.h>

int main() {
    float units, bill = 0.0, surcharge, total;

    // Input units consumed
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    // Calculate bill based on units using if-else
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Add 20% surcharge
    surcharge = bill * 0.20;
    total = bill + surcharge;

    // Print final amount without limiting decimal places
    printf("Electricity Bill = ₹%f\n", total);

}

