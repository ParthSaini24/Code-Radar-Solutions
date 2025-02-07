#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[200];
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        i+=1;
    }
    printf("%d",i);
    return 0;
}