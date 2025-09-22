#include <stdio.h>
void* my_memchr (const void* arr, int c, size_t n);

int main () {
    int const arr[] = {1, 2, 3,};
    int arr1[] = {4, 1, 2};

    printf("%i\n", *(int*)my_memchr (arr, arr1[1], 4));

    return 0;
}

void* my_memchr (const void* arr, int c, size_t n) {
    const unsigned char* s = arr;
    unsigned char uc = (unsigned char)c;

    while (n--) {
        if (*s == uc) {
            return (void*)(s - 1);
        }
    }

    return NULL;

}
