#include <stdio.h>
void* my_memmove (void* dest, const void* src, size_t n);

int main () {
    char data[11] = "1234567890";

    my_memmove(data + 4, data, 6);

    printf("%s\n", data);

    return 0;
}

void* my_memmove (void* dest, const void* src, size_t n) {
    unsigned char* d = dest;
    unsigned const char* s = src;

    if (d < s || d >= s + n) {
        while (n--) {
            *d++ = *s++;
        }
    } else {
        s += n;
        d += n;

        while (n--) {
            *(--d) = *(--s);
        }
    }

    return dest;

}
