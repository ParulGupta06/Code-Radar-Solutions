#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch>='0' && ch<= '9'){
        printf("digit\n")
    }else if( ch=='a' || ch == 'e' || ch == 'i' || ch=='o' ||ch=='u'){
        printf("vowel\n");
    }else{
        printf("consonant\n");
    }else{
        printf("special character\n");
    }
    return 0;
}