#include <stdio.h>

// Function to read array elements
void read1(int arr[20], int n) {
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Recursive Linear Search function
int linearSearch(int arr[20], int index, int n, int key) {
    if (index >= n) {
        return -1; // Key not found
    }
    if (arr[index] == key) {
        return index; // Key found at index
    }
    return linearSearch(arr, index + 1, n, key);
}

int main() {
    int a[20], n, pos, key;

    printf("Enter n value: ");
    scanf("%d", &n);

    read1(a, n);

    printf("Enter a key element: ");
    scanf("%d", &key);

    pos = linearSearch(a, 0, n, key);

    if (pos == -1) {
        printf("The key element %d is not found\n", key);
    } else {
        printf("The key element %d is found at position: %d\n", key, pos);
    }

    return 0;
}