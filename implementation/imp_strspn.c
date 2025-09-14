#include <stdio.h>
size_t my_strspn (const char* arr1, char const* arr2);

int main () {
    char const* arr = "Hello World!";
    const char* arr1 = "Helll";

    printf("%zu\n", my_strspn(arr, arr1));

    return 0;
}

size_t my_strspn (const char* arr1, char const* arr2) {
    size_t count = 0;

    while (arr1[count] != '\0') {
        int found = 0;

        for (int j = 0; arr2[j] != '\0'; j++) {
            if (arr1[count] == arr2[j]) {
                found = 1;
                break;
            }
        }

        if (!found) break;

        count++;

    }

    return count;
}
