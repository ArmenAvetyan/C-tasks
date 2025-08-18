#include <stdio.h>
void if_equal(int* arr, int size1, int* arr1, int size2);
int main () {
    int arr1[100] = {0};
    int arr2[100] = {0};
    int size1 = 0;
    int size2 = 0;

    printf("Enter size for first array: ");
    scanf("%d", &size1);

    printf("Enter numbers in first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size for second array: ");
    scanf("%d", &size2);

    printf("Enter numbers in second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    if_equal(arr1, size1, arr2, size2);

    return 0;
}

void if_equal(int* arr, int size1, int* arr1, int size2) {
    if (size1 != size2) {
    printf("Arrays are not equal!\n");
    return;
    }

    for (int i = 0; i < size1; i++) {
        if (arr[i] != arr1[i]) {
            printf("Arrays are not equal!\n");
            return;
        }
    }

    printf("Arrays are equal!\n");

}
