#include <stdio.h>
int main() {
    char str1[100],str2[50];
    scanf("%s\n%s",&str1,&str2);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}