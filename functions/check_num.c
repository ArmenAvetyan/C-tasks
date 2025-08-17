#include <stdio.h>
#include <stdbool.h>
bool check (int* arr, int number, int size);

int main () {
    int arr[100] = {0};
    int num = 0;
    int size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter numbers in array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", arr + i);
    }

    printf("Enter number for checking: ");
    scanf("%d", &num);

    if (check(arr, num, size) == 1) {
        puts("Yes");
    } else {
        puts("No");
    }


    return 0;

}

bool check (int* arr, int number, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return true;
        }
    } return false;
}
