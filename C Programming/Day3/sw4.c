/*
Create a menu for:
Press 1: Area of circle
Press 2: Area of rectangle
Press 3: Area of triangle
Ask the user to enter their choice and values, then compute accordingly.

EXAMPLE: If user enter 1 then accept radius of a circle and print area of a circle
*/
#include <stdio.h>

int main() {
    int choice;
    float PI = 3.14;
    float radius, length, breadth, base, height, area;

    
    printf("Area Calculator Menu:\n");
    printf("Press 1: Area of Circle\n");
    printf("Press 2: Area of Rectangle\n");
    printf("Press 3: Area of Triangle\n");

    
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    
    switch (choice) {
        case 1:
            // Area of Circle = PI * r * r
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of the circle is: %f\n", area);
            break;

        case 2:
            // Area of Rectangle = length * breadth
            printf("Enter length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter breadth of the rectangle: ");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("Area of the rectangle is: %f\n", area);
            break;

        case 3:
            // Area of Triangle = 0.5 * base * height
            printf("Enter base of the triangle: ");
            scanf("%f", &base);
            printf("Enter height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("Area of the triangle is: %f\n", area);
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, or 3\n");
    }

}
