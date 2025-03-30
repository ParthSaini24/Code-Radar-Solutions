#include<stdio.h>
int sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
}
int display(int arr[],int n)
{
    printf("%d %d ",arr[0],arr[n]);
}
int main()
{
    int arr[100],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d ",arr[i]);
    }
    sort(arr[100],n);
    display(arr[100],n);
    return 0;
}