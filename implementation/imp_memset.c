#include <stdio.h>
void* my_memset (void* s, int c, size_t n);

int main () {
    char buffer[10];

    my_memset(buffer, 'A', sizeof(buffer));

    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%c ", buffer[i]);
    }

    printf("\n");

    return 0;
}

void* my_memset (void* s, int c, size_t n) {
    unsigned char* p = s;
    unsigned char uc = (unsigned char)c;

    while (n--) {
        *p++ = uc;
    }

    return s;

}
