#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i='A';i<='A'+a-1;i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}