#include <stdio.h>
int main(){
    char ch;
    printf("Enter a single character");
    scnaf("%c", &ch);
    printf("you entered %C\n", ch);
    return 0;

}