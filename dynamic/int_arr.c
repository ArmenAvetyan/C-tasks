#include <stdio.h>
#include <stdlib.h>

int main () {
    int size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int* arr = (int*)malloc (size * sizeof(int));
    if (!arr) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
