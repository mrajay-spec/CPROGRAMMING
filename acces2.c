#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("All pairs in the array are:\n");

    // O(N²) operation: generating all possible pairs
    // Outer loop runs N times, inner loop also runs up to N times
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("(%d, %d)\n", arr[i], arr[j]);
        }
    }

    return 0;
}
