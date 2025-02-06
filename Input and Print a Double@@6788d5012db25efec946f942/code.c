#include <stdio.h>
int main(){
    float num1, num2;
    scanf("%f %f", &num1, &num2);  // Correct usage of & for both num1 and num2
    printf("You entered: %4f %f\n", num1, num2);  // Use a comma, not & for separating variables
    return 0;
}
