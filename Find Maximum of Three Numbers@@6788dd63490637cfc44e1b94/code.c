#include <stdio.h>

int main() {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    // Finding the maximum number
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    // Printing the maximum number
    printf("Maximum number: %d", max);

    return 0;
}
