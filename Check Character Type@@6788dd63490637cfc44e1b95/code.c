#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Taking input: a single character
    scanf("%c", &ch);

    // Check if the character is a digit (0-9)
    if (ch >= '0' && ch <= '9') {
        printf("digit\n");
    }
    // Check if the character is an alphabet (A-Z or a-z)
    else if (isalpha(ch)) {
        // Convert to lowercase to simplify vowel checking
        ch = tolower(ch);

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("vowel\n");
        } else {
            printf("consonant\n");
        }
    }
    // If not a digit or alphabet, it's a special character
    else {
        printf("special character\n");
    }

    return 0;
}
