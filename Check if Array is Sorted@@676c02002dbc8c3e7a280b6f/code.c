#include<stdio.h>
int sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            printf("Not Sorted");
        }
    }
    printf("Sorted");
}
int main()
{
    int arr1[100],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",arr1[i]);
    }
    sort(arr1[100],n);
}