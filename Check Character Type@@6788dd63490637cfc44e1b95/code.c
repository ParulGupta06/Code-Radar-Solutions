#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9') {
        printf("digit");
    }
    else if (isalpha(ch)) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("vowel");
        } else {
            printf("consonant");
        }
    }
    else {
        printf("special character\n");
    }

    return 0;
}
