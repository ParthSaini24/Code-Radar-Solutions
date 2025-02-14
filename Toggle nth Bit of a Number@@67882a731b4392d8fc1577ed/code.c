#include <stdio.h>
int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    a=a&~!(1<<n);
    printf("%d\n",a);
    return 0;
}