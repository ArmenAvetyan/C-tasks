#include <stdio.h>
void* my_memcpy (void* dest, const void* src, size_t n);

int main () {
    int dest[7] = {0};
    int src[7] = {4, 5, 6, 7, 8, 9, 10};

    my_memcpy(dest, src, sizeof(src[0]) * 7);
    
    for (int i = 0; i < 7; i++) {
        printf ("%d ", dest[i]);
    }

    printf("\n");

    return 0;
}

void* my_memcpy (void* dest, const void* src, size_t n) {
    
    unsigned char* d = dest;
    const unsigned char* s = src;

    while (n--) {
        *d++ = *s++;
    } 

    return dest;

}
