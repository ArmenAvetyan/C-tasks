#include <stdio.h>
#include <stdlib.h>

int main () {
    size_t size = 0;

    printf("Enter size of array: ");
    scanf("%zd", &size);

    int* arr = (int*) malloc(size * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Enter %lu integers: ", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    size_t n_size = 0;
    printf("Enter new size: ");
    scanf("%zd", &n_size);

    int* temp = (int*) realloc(arr, n_size * sizeof(int));
    if (!temp) {
        printf("Memory reallocation failed.\n");
        free(arr);
        exit(1);
    }

    printf("Enter %lu integers: ", n_size - size);
    for (int i = size; i < n_size; ++i) {
        scanf("%d", &temp[i]);
    }

    for (int i = 0; i < n_size; ++i) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    free(temp);

    return 0;
}
