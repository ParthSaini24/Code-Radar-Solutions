#include <stdio.h>
int main() {
    char str1[50],str2[];
    scanf("%s\n%s",&str1,&str2);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}