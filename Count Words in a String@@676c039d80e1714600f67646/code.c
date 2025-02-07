#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int count=0;
    scanf("%s",str);
    for(int i=0;i<(strlen(str));i++)
    {
        if(str[i]==' ')
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}