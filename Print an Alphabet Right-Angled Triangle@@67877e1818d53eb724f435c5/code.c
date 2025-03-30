#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i='A';i<='A'+n-1;i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}