#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if it's a digit (0-9)
    if (ch >= '0' && ch <= '9') {
        printf("digit");
    }
    // Check if it's a vowel (lowercase and uppercase)
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("vowel");
    }
    // Check if it's an alphabet (A-Z or a-z)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("consonant");
    }
    // Otherwise, it's a special character
    else {
        printf("special character");
    }

    return 0;
}
