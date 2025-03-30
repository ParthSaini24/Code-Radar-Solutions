#include<stdio.h>

void sort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)  // Bubble sort logic: multiple passes through the array
    {
        for(int j = 0; j < n-i-1; j++)  // inner loop to compare adjacent elements
        {
            if(arr[j] > arr[j+1])
            {
                // Swap if elements are in wrong order
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[100], n;
    
    // Input size of array
    scanf("%d", &n);
    
    // Input elements into array (starting from index 0)
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Call the sort function
    sort(arr, n);
    
    // Print the smallest and largest elements (first and last elements after sorting)
    printf("%d %d\n", arr[0], arr[n-1]);
    
    return 0;
}