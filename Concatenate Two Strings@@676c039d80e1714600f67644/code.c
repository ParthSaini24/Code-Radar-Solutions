#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str1[1000],str2[1000];
    scanf("%s \n%s",str1,str2);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}