#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }
    else
    {
        if(a>c)
        {
            printf("%d",b);
        }
    }
    return 0;
}