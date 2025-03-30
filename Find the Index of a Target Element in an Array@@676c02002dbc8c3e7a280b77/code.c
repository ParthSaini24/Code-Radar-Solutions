#include<stdio.h>
int findIndex(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    else{
            return -1;
        }
}
int main()
{
    int arr[100],n,target;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int index=findIndex(arr,n,target);
    printf("%d",index);
}