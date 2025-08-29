#include <stdio.h>
int rm_duplicates (int* arr, int size);

int main () {
    int arr[100] =  {0};
    int size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter numbers in array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    size = rm_duplicates(arr, size);

    rm_duplicates(arr, size);

    printf("Array without duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int rm_duplicates (int* arr, int size) {
    int i = 0;

    while (i < size) {
        int j = i + 1;
        while (j < size) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
            } else {
                j++;
            }
        }

        i++;
    }
    return size;
}
