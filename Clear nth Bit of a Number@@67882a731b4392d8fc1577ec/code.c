#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    a=a&~(1<<n);
    printf("%d\n",a);
    return 0;
}