#include <stdio.h>
int main() {
    char str1[100],str2[50];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}