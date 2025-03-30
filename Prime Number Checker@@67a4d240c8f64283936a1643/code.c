#include<stdio.h>
int isPrime(int n)
{
    if (n<=1){
     return 0;
    }  
    count=0;
    for (int i=2;i*i<=n;i++) {  
     return (n%i==0)   
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}