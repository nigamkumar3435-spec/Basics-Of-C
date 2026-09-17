#include <stdio.h>

int linearSearch(int arr[], int n, int target) 
{
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;  
    }
    return -1;  
}

int main() {
    int arr[]={12,34,22,35,66,75,43,32}, n, target;

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array\n");

    return 0;
}

