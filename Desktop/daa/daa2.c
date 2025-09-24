#include <stdio.h>

// Function to read array elements
void read1(int arr[], int n) {
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Bubble Sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display array elements
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Recursive Binary Search
int binarySearch(int arr[], int left, int right, int key) {
    if (left > right) {
        return -1; // Not found
    }

    int mid = (left + right) / 2;

    if (arr[mid] == key) {
        return mid; // Found
    }
    if (arr[mid] > key) {
        return binarySearch(arr, left, mid - 1, key);
    } else {
        return binarySearch(arr, mid + 1, right, key);
    }
}

int main() {
    int a[20], n, key, flag;

    printf("Enter value of n: ");
    scanf("%d", &n);

    read1(a, n);

    bubbleSort(a, n);

    printf("After sorting the elements are: ");
    display(a, n);

    printf("Enter key element: ");
    scanf("%d", &key);

    flag = binarySearch(a, 0, n - 1, key);

    if (flag == -1) {
        printf("The given key element %d is not found\n", key);
    } else {
        printf("The given key element %d is found at position: %d\n", key, flag);
    }

    return 0;
}