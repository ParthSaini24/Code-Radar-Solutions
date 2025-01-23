#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a-i;k++)
        {
            printf("");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}