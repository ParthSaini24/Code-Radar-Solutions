#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,a,sum;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}