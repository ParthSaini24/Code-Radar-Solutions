#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,i,even=0,odd=0;
    scanf("%d\n",&a);
    int arr[a];
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        arr[i]=b;
        if(arr[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}