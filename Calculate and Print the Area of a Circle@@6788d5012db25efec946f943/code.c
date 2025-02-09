#include <stdio.h>

#define PI 3.14

int main() {
    float radius, area;

    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Print the result
    printf("Area: %.2f\n", area);

    return 0;
}
