int bubbleSort(int arr[],a)
{
    for(int i=0;i<a-1;i++)
    {
        for(int j=0;j<a-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}