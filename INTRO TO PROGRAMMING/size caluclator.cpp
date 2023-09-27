#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2,d;
    
    // Input coordinates of the first point
    printf("Enter the coordinates of the first point (x1 y1): \n");
    scanf("%f %f", &x1, &y1);
    
    // Input coordinates of the second point
    printf("Enter the coordinates of the second point (x2 y2):\n ");
    scanf("%f %f", &x2, &y2);

    // Calculate the distance between the two points using the distance formula
     d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the calculated distance
    printf("The distance between the two points is: %f\n", d);
    return 0;
}

