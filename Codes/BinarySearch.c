#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid; 
        else if (arr[mid] < target)
            left = mid + 1; 
        else
            right = mid - 1; 
    }

    return -1; 
}

int main() {
    int arr[]={23,12,34,55,65,32,88}, n, target;
	int n = sizeof(arr) / sizeof(arr[0]);
	
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array\n");

    return 0;
}

