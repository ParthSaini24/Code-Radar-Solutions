#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    if(op=='+')
    {
        printf(a+b);
    }
    else if(op=='-')
    {
        printf(a-b);
    }
    else if(op=='*')
    {
        printf(a*b);
    }
    else if(op=='/')
    {
        printf(a/b);
    }
    else
    {
        printf("Error");
    }
    return 0;
}