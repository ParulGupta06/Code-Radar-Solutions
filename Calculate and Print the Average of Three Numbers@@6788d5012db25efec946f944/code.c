#include <stdio.h>

int main() {
    int a, b, c;
    float average;

    // Corrected scanf usage
    scanf("%d %d %d", &a, &b, &c);

    // Corrected average calculation
    average = (a + b + c) / 3.0;

    // Corrected printf statement
    printf("Average: %.2f\n", average);

    return 0;
}
