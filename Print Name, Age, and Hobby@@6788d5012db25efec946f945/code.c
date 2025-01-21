#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int age;
    char name[50],hobby[50];
    scanf("%s %d\n%s",&name,&age,&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}