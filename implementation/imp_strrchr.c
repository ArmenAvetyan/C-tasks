#include <stdio.h>
char* my_strrchr (const char* arr, int c);

int main () {
    const char* arr = "Hello world!";
    char c = 'l';

    printf("%p\n", (void*)my_strrchr(arr, c));

    return 0;
}

char* my_strrchr (const char* arr, int c) {
    const char* last = NULL;

    while (*arr != '\0') {
        if (*arr == (char)c) {
            last = arr;
        }
        arr++;
    }

    if (c == '\0') {
        return (char*)arr;
    }

        return (char*)last;
}
