#include <stdio.h>
char* my_strpbrk (const char* str1, const char* str2);

int main () {
    const char* const str = "Hello World!";
    const char* str1 = "o";

    printf("%d\n", my_strpbrk(str, str1) - str);

    return 0;
}

 char* my_strpbrk (const char* str1, const char* str2) {
    while (*str1) {
        const char* s2 = str2;

        while (*s2) {
            if (*str1 == *s2) {
                return (char*)str1;
            }
            s2++;
        }
        str1++;
    }

    return NULL;

 }
