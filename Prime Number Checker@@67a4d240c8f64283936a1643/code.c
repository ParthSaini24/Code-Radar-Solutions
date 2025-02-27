#include<stdio.h>
void isPrime(n)
{
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count+=1;
        }
    }
    if(count==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    isPrime(a);
    return 0;
}