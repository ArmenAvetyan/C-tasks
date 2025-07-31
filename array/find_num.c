#include <stdio.h>

int main() {
    int n;
    printf("Enter N (upper bound):");
    scanf("%d", &n);

    int x[n - 1];
    int sum = 0;

    printf("Enter %d integers from 1 to %d (one number missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &x[i]);
        sum += x[i];
    }

    int expected_sum = n * (n + 1) / 2;
    int missing = expected_sum - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}

