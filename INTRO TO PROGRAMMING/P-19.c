//
// Created by sa692 on 31-10-2023.
//
#include <stdio.h>

// Function to calculate the area of a circle recursively
double calculateArea(double radius) {
    if (radius <= 0) {
        return 0;
    } else {
        return 3.14159265358979323846 * radius * radius + calculateArea(radius - 1);
    }
}

int main() {
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
    } else {
        double area = calculateArea(radius);
        printf("The area of the circle is %lf\n", area);
    }

    return 0;
}