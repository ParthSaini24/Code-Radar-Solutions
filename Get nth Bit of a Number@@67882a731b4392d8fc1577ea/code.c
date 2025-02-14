#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    a=(a<<n)&0;
    printf("%d\n",a>>n);
    return 0;
}