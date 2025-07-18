#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int index = 3; // We want to access the 4th element (index starts from 0)

    // O(1) operation: accessing an element by index
    int value = arr[index];

    // Output the result
    printf("Element at index %d is %d\n", index, value);

    return 0;
}
