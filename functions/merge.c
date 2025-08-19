#include <stdio.h>
void merge_sort(int* a, int sizea, int* b, int sizeb, int* result);
void print_arr (int* a, int size);

int main () {
    int arr1[] = {1, 3, 5, 7, 9, 34, 55, 79, 81};
    int arr2[] = {2, 4, 6, 7, 9, 34, 56};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2];

    printf("First array: ");
    print_arr(arr1, size1);

    printf("Second array: ");
    print_arr(arr2, size2);

    merge_sort(arr1, size1, arr2, size2, merged);
    printf("Merged array: ");
    print_arr(merged, size1 + size2);

    return 0;
}

void merge_sort(int* a, int sizea, int* b, int sizeb, int* result) {
    int i = 0; 
    int j = 0;
    int k = 0;

    while (i < sizea && j < sizeb) {
        if (a[i] <= b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

    while (i < sizea) {
        result[k++] = a[i++];
    }

    while (j < sizeb) {
        result[k++] = b[j++];
    }
}

void print_arr (int* a, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
