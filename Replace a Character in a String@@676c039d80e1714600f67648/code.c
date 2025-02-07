#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100],a,b;
    scanf("%s %c %c",str,&a,&b);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==a)
        {
            str[i]=b;
        }
    }
    printf("%s",str);
    return 0;
}