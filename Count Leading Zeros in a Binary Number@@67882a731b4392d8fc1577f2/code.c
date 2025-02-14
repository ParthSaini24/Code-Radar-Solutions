#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,n=0;
    scanf("%d",&a);
    for(int i=31;i>=0;i--)
    {
        if((num>>i)&1){
            break;
        }
        n++;
    }
    printf("%d\n",n);
    return 0;
}