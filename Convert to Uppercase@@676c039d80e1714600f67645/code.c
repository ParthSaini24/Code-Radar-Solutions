#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        str[i]-=32;
    }
    printf("%s",str);
    return 0;
}