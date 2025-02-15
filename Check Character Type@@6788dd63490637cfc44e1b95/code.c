#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch>='0' && ch<='9'){
        printf("digit")
    }if else( ch=='a' || ch == 'e' || ch == 'i' || ch=='o' ||ch=='u'){
        printf("vowel");
    }if else{
        printf("consonant");
    }else{
        printf("special character");
    }
    return 0;
}