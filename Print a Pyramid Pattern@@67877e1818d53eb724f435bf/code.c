#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,j,k;
    scanf("%d",&n);
    k=n*2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            printf(" ");
        }
        k=k-2;
        for(j=0;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}