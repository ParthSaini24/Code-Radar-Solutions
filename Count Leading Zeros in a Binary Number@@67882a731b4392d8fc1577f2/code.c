#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    unsigned int a;
    int n=0;
    scanf("%u",&a);
    for(int i=31;i>=0;i--)
    {
        if((a>>i)&1)
        break;
        n++;
    }
    printf("%d\n",n);
    return 0;
}