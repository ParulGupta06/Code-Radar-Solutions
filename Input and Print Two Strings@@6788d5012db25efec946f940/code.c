#include <stdio.h>

int main() {
    char str1[100], str2[100]; // Define two arrays to store the strings

    // Take two space-separated strings as input
    printf("Enter two space-separated strings: ");
    scanf("%s %s", str1, str2); 

    // Print the entered strings in the required format
    printf("You entered: %s and %s\n", str1, str2);

    return 0;
}
