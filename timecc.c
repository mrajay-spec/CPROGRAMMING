#include <stdio.h>
#include <time.h>

int main() {
    long long int N[] = {1000000, 5000000, 10000000, 50000000, 100000000};  // Array of increasing N
    int num_cases = sizeof(N) / sizeof(N[0]);
    
    for(int j = 0; j < num_cases; j++) {
        long long int sum = 0;
        clock_t start, end;
        double cpu_time_used;

        printf("Calculating sum from 1 to %lld...\n", N[j]);

        start = clock();  // Start time

        for(long long int i = 1; i <= N[j]; i++) {
            sum += i;
        }

        end = clock();  // End time
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        printf("Sum = %lld\n", sum);
        printf("Time taken = %f seconds\n\n", cpu_time_used);
    }

    return 0;
}
