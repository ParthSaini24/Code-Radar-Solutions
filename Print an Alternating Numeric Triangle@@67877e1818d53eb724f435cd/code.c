#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            else
            {
                if(j%2==0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
        }
        printf("\n");
    }
    return 0;
}