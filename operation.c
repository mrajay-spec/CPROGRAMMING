#include <stdio.h>

int main() {
    int n = 1024;  // You can change this to test other values

    printf("Dividing %d by 2 repeatedly until it becomes 1:\n", n);

    // O(log N) operation: each division by 2 halves the number
    // Number of steps ≈ log₂(N)
    while (n > 1) {
        printf("%d -> ", n);
        n = n / 2;
    }

    printf("%d\n", n);  // Finally print 1

    return 0;
}
