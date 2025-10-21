#include <stdio.h>
#include <stdlib.h>

int main () {
    int size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    float* arr = (float*) calloc(size, sizeof(float));

    printf("Enter %d numbers(float): ", size);
    for (int i = 0; i < size; ++i) {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < size; ++i) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
