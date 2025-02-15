#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch >='A' && ch <= 'B'){
        printf("Uppercase\n");
    }else if(ch >= 'a' && ch <= 'b'){
        printf("Lowercase\n")
    }else{
    Not an alphabet}
    return 0;
}