#include<stdio.h>
int sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[100],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    sort(arr,n);
    printf("%d %d\n",arr[0],arr[n-1]);
    return 0;
}