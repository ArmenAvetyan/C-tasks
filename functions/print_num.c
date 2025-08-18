#include <stdio.h>
void print_numbers (char* arr, int size);

int main () {
    char arr[100] = {'\0'};
    int size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter numbers or chars in array: ");
    for (int i = 0; i < size; i++) {
        scanf(" %c", &arr[i]);
    }

    print_numbers(arr, size);

    return 0;
}

void print_numbers (char* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] >= '1' && arr[i] <= '9') {
            printf("%d ", arr[i] - '0');
        }
    }
    printf("\n");
}
