#include <stdio.h>

int main() {
    double num;  // Declare a double variable

    // Take input of a double value
    printf("Enter a double: ");
    scanf("%lf", &num);  // Use %lf for double input

    // Print the entered double value
    printf("You entered: %lf\n", num);  // Use %lf for double output

    return 0;
}
