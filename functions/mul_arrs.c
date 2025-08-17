#include <stdio.h>
void product_ind (int* arr, int* arr1, int size);

int main () {
    int arra[100] = {0};
    int arrb[100] = {0};
    int size = 0;

    printf("Enter size of arrays: ");
    scanf("%d", &size);

    printf("Enter numbers in first array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arra[i]);
    }

    printf("Enter numbers in second array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arrb[i]);
    }

    product_ind(arra, arrb, size);

    return 0;
}

void product_ind (int* arr, int* arr1, int size) {
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i] * arr1[i]);
    }

    puts("\n");

}
