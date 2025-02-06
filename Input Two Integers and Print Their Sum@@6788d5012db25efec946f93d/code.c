#include <stdio.h>

int main() {
    int a, b;  // Declare two integer variables a and b

    // Prompt the user to enter two integers
    printf("Enter two integers: ");
    
    // Read two integers from the user
    scanf("%d %d", &a, &b);

    // Calculate and print the sum of the two integers
    printf("The sum of %d and %d is: %d\n", a, b, a + b);

    return 0;
}
