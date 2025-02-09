#include <stdio.h>

#define PI 3.14

int main() {
    float radius, area;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Print the result
    printf("Area: %.2f\n", area);

    return 0;
}
