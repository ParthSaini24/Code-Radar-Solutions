#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 0) {
        return -1; // Empty array, no peak
    }

    if (n == 1) {
        return arr[0]; // Single element array, it's the peak
    }

    for (int i = 0; i < n; i++) {
        if (i == 0 && arr[i] > arr[i + 1]) {
            return arr[i]; // First element is a peak
        } else if (i == n - 1 && arr[i] > arr[i - 1]) {
            return arr[i]; // Last element is a peak
        } else if (i > 0 && i < n - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i]; // Middle element is a peak
        }
    }

    return -1; // No peak element found
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, n);
    printf("%d\n", peak);

    return 0;
}