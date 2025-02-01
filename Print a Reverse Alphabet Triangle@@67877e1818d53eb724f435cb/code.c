#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i='A'+a-1;i>='A';i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}