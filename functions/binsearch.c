#include <stdio.h>

int binsearch (int* arr, int size, int x) {
    if (size <= 0) return -1;
    if (arr[size / 2] == x) return size / 2;
    if (arr[size / 2] > x) {
        return binsearch(arr, size / 2, x);
    }
        int res = binsearch(arr + size / 2 + 1, size - size / 2 - 1, x);
        if (res == -1) return -1;
        return res + size / 2 + 1;

}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n", binsearch(arr, sizeof(arr) / sizeof(arr[0]), 10));

    return 0;
}
