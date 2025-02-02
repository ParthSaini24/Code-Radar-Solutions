#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int str1[100],str2[100];
    scanf("%s",&str1);
    str2=str1[::-1];
    printf("%s",str2);
    return 0;
}