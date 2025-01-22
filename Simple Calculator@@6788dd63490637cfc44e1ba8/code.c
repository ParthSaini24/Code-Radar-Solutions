#include <stdio.h>
int main() {
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    match(op)
    {
        case '+'
        {
            printf("%d",a+b);
        }
        case '-'
        {
            printf("%d",a-b);
        }
        case '*'
        {
            printf("%d",a*b);
        }
        case '/'
        {
            printf("%f",a/b);
        }
    }
    return 0;
}