#include<stdio.h>

int findMax(int *arr, int size) {
    int max = arr[0];  // Assume the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[6];

    // Input array
    for (int i = 0; i < 6; i++) {
        printf("Enter the value of the element %d:\n", (i + 1));
        scanf("%d", &arr[i]);
    }

    // Print array
    printf("Entered array:\n");
    for (int i = 0; i < 6; i++) {
        printf("Value of element %d: %d\n", (i + 1), arr[i]);
    }

    printf("The maximum number is %d\n", findMax(arr, 6));

    return 0;
}
