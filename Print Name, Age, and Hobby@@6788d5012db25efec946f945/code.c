#include <stdio.h>
int main(){
    char name[100];
    int num;
    char hobby[100];
    scanf("%s %d %s", name,&num,hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",num);
    printf("Hobby: %s\n, "hobby);
    return 0;
}