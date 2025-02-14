#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    printf("%d\n",(a>>n)&1);
    return 0;
}