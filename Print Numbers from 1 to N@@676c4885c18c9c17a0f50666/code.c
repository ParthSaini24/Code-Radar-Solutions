#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d",i);
    }
    return 0;
}