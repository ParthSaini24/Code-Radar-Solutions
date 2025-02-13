#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str1[1000],str2[1000];
    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}