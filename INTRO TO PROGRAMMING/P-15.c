//Write a program in c to calculate the area of regular hexagon.
#include <stdio.h>
#include <math.h>
// FORMULA [ Area = (3 * √3 * a^2) / 2 ]
int main() {
    float a, b, area;
    printf("Enter the value of side:\n");
    scanf("%f", &a);
    b = (3 * sqrt(3)) / 2;  // Using sqrt(3) for the value of √3
    area = b * (a * a);
    printf("Area of the hexagon is: %f\n", area);

    return 0;
}
