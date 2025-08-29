#include <stdio.h>
void rotate (int* arr, int size, int n);
static void print_array (int* arr, int size);

int main () {
    int arr[100] = {0};
    int size = 0;
    int k = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter how much the mass will rotate: ");
    scanf("%d", &k);

    printf("Enter %d numbers in array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    rotate(arr, size, k);
    
    print_array(arr, size);

    return 0;
}

void rotate (int* arr, int size, int n) {
    n = n % size;
    for  (int j = 0; j < n; j++) {
        int temp = arr[size -1];
        for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
}
static void print_array (int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
