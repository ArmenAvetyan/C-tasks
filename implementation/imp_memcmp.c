#include <stdio.h>
int my_memcmp(const void* dest, const void* src, size_t n);

int main () {
    const int t1[] = {1, 2, 3, 4, 5};
    const int t2[] = {1, 2, 3, 4, 4 + 1};

    printf("%d\n", my_memcmp(t1, t2, sizeof(t1)));

    return 0;
}

int my_memcmp(const void* s1, const void* s2, size_t n) {
    const unsigned char* p1 = s1;
    const unsigned char* p2 = s2;

    for (size_t i = 0; i < n; i++) {
        if (p1[i] != p2[i]) {
            return p1[i] - p2[i];
        }
    }

    return 0;

}
