#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9') {
        printf("digit");
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("vowel");
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("consonant");
    }
    else {
        printf("special character");
    }
    return 0;
}
