#include <stdio.h>

int main() {
    double num;

    printf("Enter a double precision floating point number: ");
    if (scanf("%lf", &num) != 1) {  // Check if the input is valid
        printf("Error: Invalid input\n");
        return 1;  // Exit with error status
    }

    printf("You entered: %lf\n", num);
    return 0;
}
