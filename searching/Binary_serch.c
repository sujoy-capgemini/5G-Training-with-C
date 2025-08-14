#include <stdio.h>

// Function to perform binary search
int binary_search(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            return mid;  // Element found
        } else if (arr[mid] < x) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 30;

    int result = binary_search(arr, size, element);

    if (result != -1) {
        printf("The element is found at index %d\n", result);
    } else {
        printf("The element is not found\n");
    }

    return 0;
}
