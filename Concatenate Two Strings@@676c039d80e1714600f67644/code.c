#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str1[50],str2[50];
    scanf("%s\n%s",&str1[50],&str2[50]);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}