#include <stdio.h>
void reverse_arr (int* start, int* end);

int main () {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int* p = arr; p < arr + size; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    reverse_arr(arr, arr + size - 1);

    printf("Reversed array: ");
    for (int *p = arr; p < arr + size; p++) {
        printf("%d ", *p);
    }
    
    printf("\n");

    return 0;
}

void reverse_arr (int* start, int* end) {
    while (start < end) {
        int temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
