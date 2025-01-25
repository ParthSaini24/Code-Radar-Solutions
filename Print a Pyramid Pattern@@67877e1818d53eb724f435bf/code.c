#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j,k;
    scanf("%d",&a);
    k=a*2;
    for(i=0;i<a;i++)
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
        printf(" ");
    }
    return 0;
}