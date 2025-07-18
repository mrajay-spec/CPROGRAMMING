#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 89, 34, 23, 99, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    // O(N) operation: finding the maximum element
    // We must look at each element once to ensure the correct maximum
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Output the maximum value
    printf("Maximum element in the array is: %d\n", max);

    return 0;
}
