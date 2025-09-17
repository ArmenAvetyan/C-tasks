#include <stdio.h>
size_t my_strcspn (char const* arr1, const char* arr2);

int main () {
    char const* arr = "abc123";
    const char* arr1 = "123";

    printf("%zu\n", my_strcspn(arr, arr1));

    return 0;
}

size_t my_strcspn (char const* arr1, const char* arr2) {
    size_t i = 0;

    while (arr1[i]) {

        for (int j = 0; arr2[j]; j++) {
            if (arr1[i] == arr2[j]) {
                return i;
            }
        }

    i++;

    }

    return i;

}
