#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,n=0;
    scanf("%d",&a);
    while((a&1)==0 && a!=0)
    {
        a>>=1;
        n++;
    }
    printf("%d\n",n);
    return 0;
}