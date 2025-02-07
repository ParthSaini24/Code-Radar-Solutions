#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    int count=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        str[i]=str[i]-32;
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}