#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int count=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<(strlen(str));i++)
    {
        if(str[i]=='\0')
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}